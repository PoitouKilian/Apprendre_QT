/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

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

class Ui_ClientWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBoxConnexionServeur;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelIPServeur;
    QLineEdit *lineEditIPServeur;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEditPortServeur;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonQuitter;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonConnexion;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelEtatConnexion;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *textEditEtat;
    QGroupBox *groupBoxInfosClient;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButtonOrdinateur;
    QPushButton *pushButtonUtilisateur;
    QPushButton *pushButtonArchitecture;
    QPushButton *pushButtonOS;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEditNomOrdiDistant;
    QLineEdit *lineEditNomUtilisateur;
    QLineEdit *lineEditArchiProcess;
    QLineEdit *lineEditOSOrdinateur;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QStringLiteral("ClientWidget"));
        ClientWidget->resize(650, 340);
        ClientWidget->setMinimumSize(QSize(650, 340));
        ClientWidget->setMaximumSize(QSize(650, 340));
        layoutWidget = new QWidget(ClientWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 641, 331));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBoxConnexionServeur = new QGroupBox(layoutWidget);
        groupBoxConnexionServeur->setObjectName(QStringLiteral("groupBoxConnexionServeur"));
        layoutWidget1 = new QWidget(groupBoxConnexionServeur);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 621, 121));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelIPServeur = new QLabel(layoutWidget1);
        labelIPServeur->setObjectName(QStringLiteral("labelIPServeur"));

        horizontalLayout_3->addWidget(labelIPServeur);

        lineEditIPServeur = new QLineEdit(layoutWidget1);
        lineEditIPServeur->setObjectName(QStringLiteral("lineEditIPServeur"));

        horizontalLayout_3->addWidget(lineEditIPServeur);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEditPortServeur = new QLineEdit(layoutWidget1);
        lineEditPortServeur->setObjectName(QStringLiteral("lineEditPortServeur"));

        horizontalLayout_2->addWidget(lineEditPortServeur);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonQuitter = new QPushButton(layoutWidget1);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        horizontalLayout->addWidget(pushButtonQuitter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonConnexion = new QPushButton(layoutWidget1);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));

        horizontalLayout->addWidget(pushButtonConnexion);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelEtatConnexion = new QLabel(layoutWidget1);
        labelEtatConnexion->setObjectName(QStringLiteral("labelEtatConnexion"));

        horizontalLayout_4->addWidget(labelEtatConnexion);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        textEditEtat = new QTextEdit(layoutWidget1);
        textEditEtat->setObjectName(QStringLiteral("textEditEtat"));

        verticalLayout_2->addWidget(textEditEtat);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_5->addWidget(groupBoxConnexionServeur);

        groupBoxInfosClient = new QGroupBox(layoutWidget);
        groupBoxInfosClient->setObjectName(QStringLiteral("groupBoxInfosClient"));
        groupBoxInfosClient->setEnabled(false);
        layoutWidget2 = new QWidget(groupBoxInfosClient);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 30, 621, 122));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButtonOrdinateur = new QPushButton(layoutWidget2);
        pushButtonOrdinateur->setObjectName(QStringLiteral("pushButtonOrdinateur"));

        verticalLayout_3->addWidget(pushButtonOrdinateur);

        pushButtonUtilisateur = new QPushButton(layoutWidget2);
        pushButtonUtilisateur->setObjectName(QStringLiteral("pushButtonUtilisateur"));

        verticalLayout_3->addWidget(pushButtonUtilisateur);

        pushButtonArchitecture = new QPushButton(layoutWidget2);
        pushButtonArchitecture->setObjectName(QStringLiteral("pushButtonArchitecture"));

        verticalLayout_3->addWidget(pushButtonArchitecture);

        pushButtonOS = new QPushButton(layoutWidget2);
        pushButtonOS->setObjectName(QStringLiteral("pushButtonOS"));

        verticalLayout_3->addWidget(pushButtonOS);


        horizontalLayout_6->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lineEditNomOrdiDistant = new QLineEdit(layoutWidget2);
        lineEditNomOrdiDistant->setObjectName(QStringLiteral("lineEditNomOrdiDistant"));
        lineEditNomOrdiDistant->setReadOnly(true);

        verticalLayout_4->addWidget(lineEditNomOrdiDistant);

        lineEditNomUtilisateur = new QLineEdit(layoutWidget2);
        lineEditNomUtilisateur->setObjectName(QStringLiteral("lineEditNomUtilisateur"));
        lineEditNomUtilisateur->setReadOnly(true);

        verticalLayout_4->addWidget(lineEditNomUtilisateur);

        lineEditArchiProcess = new QLineEdit(layoutWidget2);
        lineEditArchiProcess->setObjectName(QStringLiteral("lineEditArchiProcess"));
        lineEditArchiProcess->setReadOnly(true);

        verticalLayout_4->addWidget(lineEditArchiProcess);

        lineEditOSOrdinateur = new QLineEdit(layoutWidget2);
        lineEditOSOrdinateur->setObjectName(QStringLiteral("lineEditOSOrdinateur"));
        lineEditOSOrdinateur->setReadOnly(true);

        verticalLayout_4->addWidget(lineEditOSOrdinateur);


        horizontalLayout_6->addLayout(verticalLayout_4);


        verticalLayout_5->addWidget(groupBoxInfosClient);


        retranslateUi(ClientWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ClientWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QApplication::translate("ClientWidget", "ClientWidget", nullptr));
        groupBoxConnexionServeur->setTitle(QApplication::translate("ClientWidget", "Connexion au serveur", nullptr));
        labelIPServeur->setText(QApplication::translate("ClientWidget", "Adresse IP du serveur :", nullptr));
        label->setText(QApplication::translate("ClientWidget", "Num\303\251ro de port du serveur : ", nullptr));
        pushButtonQuitter->setText(QApplication::translate("ClientWidget", "Quitter", nullptr));
        pushButtonConnexion->setText(QApplication::translate("ClientWidget", "Connexion", nullptr));
        labelEtatConnexion->setText(QApplication::translate("ClientWidget", "Etat de la connexion", nullptr));
        groupBoxInfosClient->setTitle(QApplication::translate("ClientWidget", "Informations Client", nullptr));
        pushButtonOrdinateur->setText(QApplication::translate("ClientWidget", "Nom de l'ordinateur distant", nullptr));
        pushButtonUtilisateur->setText(QApplication::translate("ClientWidget", "Nom de l'utilisateur", nullptr));
        pushButtonArchitecture->setText(QApplication::translate("ClientWidget", "Architecture processeur", nullptr));
        pushButtonOS->setText(QApplication::translate("ClientWidget", "OS de l'ordinateur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
