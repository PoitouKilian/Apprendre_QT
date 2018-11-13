#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget),
    lesAlveoles(4,5)
    {
        ui->setupUi(this);
        AfficherAlveolesLibres();
    }


Widget::~Widget()
{
    delete ui;
}

void Widget::AfficherAlveolesLibres()
{
    ui->listWidgetNumero->clear();
    for(int & numAlveole : lesAlveoles)
        ui->listWidgetNumero->addItem(QString::number(numAlveole));
}

void Widget::on_pushButtonReserver_clicked()
{
    int rangee;
    int colonne;
    if(lesAlveoles.Reserver(rangee,colonne))
    {
        QString texte = QString::number(rangee) + "," + QString::number(colonne);
        ui->listWidgetRangeeEtColonne->addItem(texte);
        AfficherAlveolesLibres();
    }
}

void Widget::on_pushButtonLiberer_clicked()
{
    QListWidgetItem *item = ui->listWidgetRangeeEtColonne->currentItem();
    QString texte = item->text();
    delete item;
    QStringList coord = texte.split(",");
    lesAlveoles.Liberer(coord[0].toInt(),coord[1].toInt());
    AfficherAlveolesLibres();
    ui->listWidgetRangeeEtColonne->setCurrentRow(-1);

}
