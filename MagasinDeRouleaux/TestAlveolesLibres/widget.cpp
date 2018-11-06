#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget),
    alveoles(new AlveolesLibres(4,5))

{
    ui->setupUi(this);
    ui->pushButtonLiberer->setEnabled(false);
    for(const int & valeur: *alveoles)
    {
        ui->listWidgetNumero->addItem(QString :: number(valeur));
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonReserver_clicked()
{
   /* pop_back(alveoles);
    ui->listWidgetRangeeEtColonne->addItem(QString :: number(alveoles));*/
}

void Widget::on_pushButtonLiberer_clicked()
{

}
