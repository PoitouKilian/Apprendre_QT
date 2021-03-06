#ifndef DAB_MAINWINDOW_H
#define DAB_MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QMessageBox>
#include <QBuffer>
#include <QString>
#include <QChar>

namespace Ui {
class DAB_MainWindow;
}

class DAB_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DAB_MainWindow(QWidget *parent = nullptr);
    ~DAB_MainWindow();

private slots:
    void on_pushButtonConnexion_clicked();
    void on_pushButtonEnvoi_clicked();
    void on_pushButtonNumero_clicked();
    void onQTcpSocket_connected();
    void onQTcpSocket_disconnected();
    void onQTcpSocket_error(QAbstractSocket::SocketError socketError);
    void onQTcpSocket_readyRead();

private:
    Ui::DAB_MainWindow *ui;
    QTcpSocket *socketClientBanque;
};

#endif // DAB_MAINWINDOW_H
