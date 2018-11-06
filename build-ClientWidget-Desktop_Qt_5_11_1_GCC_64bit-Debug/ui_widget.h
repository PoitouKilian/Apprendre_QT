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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBoxConnexionAuServeur;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelAdresseIP;
    QLineEdit *lineEditAdresseIP;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelNumeroPort;
    QLineEdit *lineEditNumeroPort;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonQuitter;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonConnexion;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelEtatConnexion;
    QTextEdit *textEditEtatConnexion;
    QGroupBox *groupBoxInformationClient;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButtonNomOrdinateur;
    QPushButton *pushButtonNomUtilisateur;
    QPushButton *pushButtonArchitecture;
    QPushButton *pushButtonOS;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEditNomOrdinateur;
    QLineEdit *lineEditNomUtilisateur;
    QLineEdit *lineEditNomArchitecture;
    QLineEdit *lineEditOS;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(667, 385);
        groupBoxConnexionAuServeur = new QGroupBox(Widget);
        groupBoxConnexionAuServeur->setObjectName(QStringLiteral("groupBoxConnexionAuServeur"));
        groupBoxConnexionAuServeur->setGeometry(QRect(20, 20, 611, 161));
        layoutWidget = new QWidget(groupBoxConnexionAuServeur);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 571, 111));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelAdresseIP = new QLabel(layoutWidget);
        labelAdresseIP->setObjectName(QStringLiteral("labelAdresseIP"));

        horizontalLayout_3->addWidget(labelAdresseIP);

        lineEditAdresseIP = new QLineEdit(layoutWidget);
        lineEditAdresseIP->setObjectName(QStringLiteral("lineEditAdresseIP"));

        horizontalLayout_3->addWidget(lineEditAdresseIP);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelNumeroPort = new QLabel(layoutWidget);
        labelNumeroPort->setObjectName(QStringLiteral("labelNumeroPort"));

        horizontalLayout_2->addWidget(labelNumeroPort);

        lineEditNumeroPort = new QLineEdit(layoutWidget);
        lineEditNumeroPort->setObjectName(QStringLiteral("lineEditNumeroPort"));

        horizontalLayout_2->addWidget(lineEditNumeroPort);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonQuitter = new QPushButton(layoutWidget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        horizontalLayout->addWidget(pushButtonQuitter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonConnexion = new QPushButton(layoutWidget);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));

        horizontalLayout->addWidget(pushButtonConnexion);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelEtatConnexion = new QLabel(layoutWidget);
        labelEtatConnexion->setObjectName(QStringLiteral("labelEtatConnexion"));

        verticalLayout_2->addWidget(labelEtatConnexion);

        textEditEtatConnexion = new QTextEdit(layoutWidget);
        textEditEtatConnexion->setObjectName(QStringLiteral("textEditEtatConnexion"));

        verticalLayout_2->addWidget(textEditEtatConnexion);


        horizontalLayout_4->addLayout(verticalLayout_2);

        groupBoxInformationClient = new QGroupBox(Widget);
        groupBoxInformationClient->setObjectName(QStringLiteral("groupBoxInformationClient"));
        groupBoxInformationClient->setEnabled(false);
        groupBoxInformationClient->setGeometry(QRect(20, 190, 611, 171));
        layoutWidget1 = new QWidget(groupBoxInformationClient);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 571, 122));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButtonNomOrdinateur = new QPushButton(layoutWidget1);
        pushButtonNomOrdinateur->setObjectName(QStringLiteral("pushButtonNomOrdinateur"));

        verticalLayout_3->addWidget(pushButtonNomOrdinateur);

        pushButtonNomUtilisateur = new QPushButton(layoutWidget1);
        pushButtonNomUtilisateur->setObjectName(QStringLiteral("pushButtonNomUtilisateur"));

        verticalLayout_3->addWidget(pushButtonNomUtilisateur);

        pushButtonArchitecture = new QPushButton(layoutWidget1);
        pushButtonArchitecture->setObjectName(QStringLiteral("pushButtonArchitecture"));

        verticalLayout_3->addWidget(pushButtonArchitecture);

        pushButtonOS = new QPushButton(layoutWidget1);
        pushButtonOS->setObjectName(QStringLiteral("pushButtonOS"));

        verticalLayout_3->addWidget(pushButtonOS);


        horizontalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lineEditNomOrdinateur = new QLineEdit(layoutWidget1);
        lineEditNomOrdinateur->setObjectName(QStringLiteral("lineEditNomOrdinateur"));
        lineEditNomOrdinateur->setReadOnly(true);

        verticalLayout_4->addWidget(lineEditNomOrdinateur);

        lineEditNomUtilisateur = new QLineEdit(layoutWidget1);
        lineEditNomUtilisateur->setObjectName(QStringLiteral("lineEditNomUtilisateur"));
        lineEditNomUtilisateur->setReadOnly(true);

        verticalLayout_4->addWidget(lineEditNomUtilisateur);

        lineEditNomArchitecture = new QLineEdit(layoutWidget1);
        lineEditNomArchitecture->setObjectName(QStringLiteral("lineEditNomArchitecture"));
        lineEditNomArchitecture->setReadOnly(true);

        verticalLayout_4->addWidget(lineEditNomArchitecture);

        lineEditOS = new QLineEdit(layoutWidget1);
        lineEditOS->setObjectName(QStringLiteral("lineEditOS"));
        lineEditOS->setReadOnly(true);

        verticalLayout_4->addWidget(lineEditOS);


        horizontalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        groupBoxConnexionAuServeur->setTitle(QApplication::translate("Widget", "Connexion au serveur", nullptr));
        labelAdresseIP->setText(QApplication::translate("Widget", "Adresse IP du serveur :", nullptr));
        labelNumeroPort->setText(QApplication::translate("Widget", "Num\303\251ro de port du serveur :", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
        pushButtonConnexion->setText(QApplication::translate("Widget", "Connexion", nullptr));
        labelEtatConnexion->setText(QApplication::translate("Widget", "Etat de la connexion", nullptr));
        groupBoxInformationClient->setTitle(QApplication::translate("Widget", "Information Client", nullptr));
        pushButtonNomOrdinateur->setText(QApplication::translate("Widget", "Nom de l'ordinateur distant", nullptr));
        pushButtonNomUtilisateur->setText(QApplication::translate("Widget", "Nom de l'utilisateur", nullptr));
        pushButtonArchitecture->setText(QApplication::translate("Widget", "Architecture processeur", nullptr));
        pushButtonOS->setText(QApplication::translate("Widget", "OS de l'ordinateur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
