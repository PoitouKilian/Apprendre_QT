#ifndef SERVEURWIDGET_H
#define SERVEURWIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include <QProcess>
#include <QByteArray>
#include <QHostInfo>

namespace Ui {
class ServeurWidget;
}

class ServeurWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ServeurWidget(QWidget *parent = nullptr);
    ~ServeurWidget();


private slots:
    void on_pushButtonLancementServeur_clicked();

    void onQTcpServer_newConnection();

    void onQTcpSocket_readyRead();

    void onQTcpSocket_disconnected();

    void onQProcess_readyReadStandardOutput();

private:
    Ui::ServeurWidget *ui;
    QTcpServer *socketEcouteServeur;
    QList<QTcpSocket *> socketDialogueClient;
    QList<QProcess *> process;
};

#endif // SERVEURWIDGET_H
