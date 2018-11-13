/********************************************************************************
** Form generated from reading UI file 'serveurwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEURWIDGET_H
#define UI_SERVEURWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServeurWidget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNumeroPort;
    QSpinBox *spinBoxNumeroPort;
    QPushButton *pushButtonLancementServeur;
    QLabel *labelClients;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEditClients;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *ServeurWidget)
    {
        if (ServeurWidget->objectName().isEmpty())
            ServeurWidget->setObjectName(QStringLiteral("ServeurWidget"));
        ServeurWidget->resize(390, 333);
        widget = new QWidget(ServeurWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 371, 317));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelNumeroPort = new QLabel(widget);
        labelNumeroPort->setObjectName(QStringLiteral("labelNumeroPort"));

        horizontalLayout->addWidget(labelNumeroPort);

        spinBoxNumeroPort = new QSpinBox(widget);
        spinBoxNumeroPort->setObjectName(QStringLiteral("spinBoxNumeroPort"));
        spinBoxNumeroPort->setMaximum(9999);

        horizontalLayout->addWidget(spinBoxNumeroPort);


        verticalLayout->addLayout(horizontalLayout);

        pushButtonLancementServeur = new QPushButton(widget);
        pushButtonLancementServeur->setObjectName(QStringLiteral("pushButtonLancementServeur"));

        verticalLayout->addWidget(pushButtonLancementServeur);


        verticalLayout_3->addLayout(verticalLayout);

        labelClients = new QLabel(widget);
        labelClients->setObjectName(QStringLiteral("labelClients"));

        verticalLayout_3->addWidget(labelClients);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textEditClients = new QTextEdit(widget);
        textEditClients->setObjectName(QStringLiteral("textEditClients"));

        verticalLayout_2->addWidget(textEditClients);

        pushButtonQuitter = new QPushButton(widget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        verticalLayout_2->addWidget(pushButtonQuitter);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(ServeurWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ServeurWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ServeurWidget);
    } // setupUi

    void retranslateUi(QWidget *ServeurWidget)
    {
        ServeurWidget->setWindowTitle(QApplication::translate("ServeurWidget", "ServeurWidget", nullptr));
        labelNumeroPort->setText(QApplication::translate("ServeurWidget", "Num\303\251ro de port", nullptr));
        pushButtonLancementServeur->setText(QApplication::translate("ServeurWidget", "Lancement serveur", nullptr));
        labelClients->setText(QApplication::translate("ServeurWidget", "Clients", nullptr));
        pushButtonQuitter->setText(QApplication::translate("ServeurWidget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeurWidget: public Ui_ServeurWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURWIDGET_H
