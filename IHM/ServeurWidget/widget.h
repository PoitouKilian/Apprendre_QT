#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QHostInfo>
#include <QProcess>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void onQTcpServer_newConnection();
    void onQTcpSocket_readyRead();
    void onQTcpSocket_disconnected();
    void onQProcess_readyReadStandardOutput();
    void on_pushButtonLancerServeur_clicked();

private:
    Ui::Widget *ui;
    QTcpServer *socketEcouteServeur;
    QTcpSocket *socketDialogueClient;
    QProcess *process;
};

#endif // WIDGET_H
