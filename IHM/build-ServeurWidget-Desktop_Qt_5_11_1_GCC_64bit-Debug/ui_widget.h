/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

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

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNumeroPort;
    QSpinBox *spinBoxNumeroPort;
    QPushButton *pushButtonLancerServeur;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelClients;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEditLogs;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 357);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 381, 319));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelNumeroPort = new QLabel(layoutWidget);
        labelNumeroPort->setObjectName(QStringLiteral("labelNumeroPort"));

        horizontalLayout->addWidget(labelNumeroPort);

        spinBoxNumeroPort = new QSpinBox(layoutWidget);
        spinBoxNumeroPort->setObjectName(QStringLiteral("spinBoxNumeroPort"));
        spinBoxNumeroPort->setMaximum(10000);

        horizontalLayout->addWidget(spinBoxNumeroPort);


        verticalLayout->addLayout(horizontalLayout);

        pushButtonLancerServeur = new QPushButton(layoutWidget);
        pushButtonLancerServeur->setObjectName(QStringLiteral("pushButtonLancerServeur"));

        verticalLayout->addWidget(pushButtonLancerServeur);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelClients = new QLabel(layoutWidget);
        labelClients->setObjectName(QStringLiteral("labelClients"));

        verticalLayout_3->addWidget(labelClients);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textEditLogs = new QTextEdit(layoutWidget);
        textEditLogs->setObjectName(QStringLiteral("textEditLogs"));

        verticalLayout_2->addWidget(textEditLogs);

        pushButtonQuitter = new QPushButton(layoutWidget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        verticalLayout_2->addWidget(pushButtonQuitter);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        labelNumeroPort->setText(QApplication::translate("Widget", "Num\303\251ro de port", nullptr));
        pushButtonLancerServeur->setText(QApplication::translate("Widget", "Lancement serveur", nullptr));
        labelClients->setText(QApplication::translate("Widget", "Clients", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
