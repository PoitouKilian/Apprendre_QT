#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServeurWidget)
{
    socketEcouteServeur = new QTcpServer;
    connect(socketEcouteServeur,&QTcpServer::newConnection,this,&ServeurWidget::onQTcpServer_newConnection);

    ui->setupUi(this);
}

ServeurWidget::~ServeurWidget()
{
    delete ui;
}

void ServeurWidget::on_pushButtonLancementServeur_clicked()
{
    bool retVal = socketEcouteServeur->listen(QHostAddress::Any,ui->spinBoxNumeroPort->text().toUShort());

    if(retVal)
    {
        ui->pushButtonLancementServeur->setEnabled(false);
        ui->textEditClients->append("Serveur lancé");
    }
    else {
        ui->textEditClients->append("Serveur non lancé");
    }
}

void ServeurWidget::onQTcpServer_newConnection()
{
   QTcpSocket *client;

    client = socketEcouteServeur->nextPendingConnection();
    connect(client,&QTcpSocket::readyRead,this,&ServeurWidget::onQTcpSocket_readyRead);
    connect(client,&QTcpSocket::disconnected,this,&ServeurWidget::onQTcpSocket_disconnected);
    socketDialogueClient.append(client);

    QProcess *processus;
    processus = new QProcess;
    connect(processus, &QProcess::readyReadStandardOutput, this, &ServeurWidget::onQProcess_readyReadStandardOutput);
    process.append(processus);


}

void ServeurWidget::onQTcpSocket_readyRead()
{
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    int indexProcess=socketDialogueClient.indexOf(client);
    QByteArray reponse = socketDialogueClient.at(indexProcess)->readAll();
    ui->textEditClients->append(QString::number(indexProcess));

    if (reponse.toStdString()=="u")
    {
        socketDialogueClient.at(indexProcess)->write(getenv("USERNAME"));
    }
    if (reponse.toStdString()=="c")
    {
        socketDialogueClient.at(indexProcess)->write(QHostInfo::localHostName().toLatin1());
    }
    if (reponse.toStdString()=="o")
    {
        process.at(indexProcess)->start("uname");
    }
    if (reponse.toStdString()=="a")
    {
        process.at(indexProcess)->start("uname",QStringList("-p"));
    }
    ui->textEditClients->append(reponse);

}

void ServeurWidget::onQTcpSocket_disconnected()
{
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    int indexProcess=socketDialogueClient.indexOf(client);

    ui->textEditClients->append("Deconnexion du client : " + client->peerAddress().toString());

    process.removeAt(indexProcess);
    socketDialogueClient.removeOne(socketDialogueClient.at(indexProcess));
}

void ServeurWidget::onQProcess_readyReadStandardOutput()
{
    QProcess *pro=qobject_cast<QProcess*>(sender());
    int indexClient=process.indexOf(pro);

    QString reponse = pro->readAllStandardOutput();
    if(!reponse.isEmpty()) {
        QString message = "Réponse envoyée à " + socketDialogueClient.at(indexClient)->peerAddress().toString()+" : " + reponse;
        ui->textEditClients->append(message);
        socketDialogueClient.at(indexClient)->write(reponse.toLatin1());
    }
}
