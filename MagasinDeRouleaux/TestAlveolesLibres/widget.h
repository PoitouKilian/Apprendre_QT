#ifndef WIDGET_H
#define WIDGET_H

#include "alveoleslibres.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void AfficherAlveolesLibres();

    private slots:
        void on_pushButtonReserver_clicked();

        void on_pushButtonLiberer_clicked();

private:
    Ui::Widget *ui;
    AlveolesLibres lesAlveoles;
};

#endif // WIDGET_H
