#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    socketDialogueClient = new QTcpSocket;
    socketEcouteServeur = new QTcpServer;
    process = new QProcess;
    connect(socketEcouteServeur,&QTcpServer::newConnection,this,&Widget::onQTcpServer_newConnection);

    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onQTcpServer_newConnection()
{
    //socketDialogueClient est le retour de nextPendingConnection
    socketDialogueClient = socketEcouteServeur->nextPendingConnection();
    socketEcouteServeur->setMaxPendingConnections(1);

    connect(process, &QProcess::readyReadStandardOutput, this, &Widget::onQProcess_readyReadStandardOutput);
    connect(socketDialogueClient,&QTcpSocket::readyRead,this,&Widget::onQTcpSocket_readyRead);
    connect(socketDialogueClient,&QTcpSocket::disconnected,this,&Widget::onQTcpSocket_disconnected);
}

void Widget::onQTcpSocket_readyRead()
{
    QString reponse = socketDialogueClient->readAll();
    //Qbytearray reponse = socketDialogueClient->readAll();
    QTextStream texte(socketDialogueClient);
   // QString reponse;

    //ui->textEditLogs->append(donnees);
    //if(reponse.toStdString== 'u')
    //{
    //    reponse = getenv("USERNAME");
    //}
    //comparaison de la chaine 1 (donnees) a la chaine 2 (caractere)
    if( reponse =='u'){
        reponse = getenv("USERNAME");
        texte << reponse;
        //socketDialogueClient->write(reponse.toLatin1());
    }
    if( reponse =='c'){
        reponse = QHostInfo::localHostName();
        texte << reponse;
    }
    if( reponse =='o'){
        process->start("uname",QStringList("-p"));
    }
    if( reponse =='a'){
        process->start("uname");
    }
    ui->textEditLogs->append(reponse);

        /*Autre solution
         *QByteArray donnees = socketDialogueClient->readAll();
    QString reponse;

    //comparaison de la chaine 1 (donnees) a la chaine 2 (caractere)

    if( !strcmp(donnees,"u")){
        reponse = getenv("USERNAME");
        ui->textEditLogs->append(reponse);
        }*/
}

void Widget::onQTcpSocket_disconnected()
{

}

void Widget::onQProcess_readyReadStandardOutput()
{
    QString reponse = process->readAllStandardOutput();
        if(!reponse.isEmpty())
        {
            QString message = "Réponse envoyée à " + socketDialogueClient->peerAddress().toString()+" : " + reponse;
            ui->textEditLogs->append(message);
            socketDialogueClient->write(reponse.toLatin1());
        }
}
void Widget::on_pushButtonLancerServeur_clicked()
{
    //listen
    if(!socketEcouteServeur->listen(QHostAddress::Any,8888))
    {
        ui->textEditLogs->append("Serveur non lancé");
    }
    else
    {
        ui->textEditLogs->append("Serveur lancé");
    }

}
