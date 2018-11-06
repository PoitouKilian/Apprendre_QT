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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *labelNumero;
    QLabel *labelRangees;
    QListWidget *listWidgetNumero;
    QListWidget *listWidgetRangeeEtColonne;
    QPushButton *pushButtonReserver;
    QPushButton *pushButtonLiberer;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(486, 347);
        labelNumero = new QLabel(Widget);
        labelNumero->setObjectName(QStringLiteral("labelNumero"));
        labelNumero->setGeometry(QRect(20, 10, 141, 17));
        labelRangees = new QLabel(Widget);
        labelRangees->setObjectName(QStringLiteral("labelRangees"));
        labelRangees->setGeometry(QRect(280, 10, 171, 17));
        listWidgetNumero = new QListWidget(Widget);
        listWidgetNumero->setObjectName(QStringLiteral("listWidgetNumero"));
        listWidgetNumero->setGeometry(QRect(20, 30, 141, 221));
        listWidgetRangeeEtColonne = new QListWidget(Widget);
        listWidgetRangeeEtColonne->setObjectName(QStringLiteral("listWidgetRangeeEtColonne"));
        listWidgetRangeeEtColonne->setGeometry(QRect(300, 30, 141, 221));
        pushButtonReserver = new QPushButton(Widget);
        pushButtonReserver->setObjectName(QStringLiteral("pushButtonReserver"));
        pushButtonReserver->setGeometry(QRect(190, 140, 80, 25));
        pushButtonLiberer = new QPushButton(Widget);
        pushButtonLiberer->setObjectName(QStringLiteral("pushButtonLiberer"));
        pushButtonLiberer->setGeometry(QRect(190, 180, 80, 25));
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(120, 260, 241, 71));

        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        labelNumero->setText(QApplication::translate("Widget", "Num\303\251ro d'alv\303\251oles libres", nullptr));
        labelRangees->setText(QApplication::translate("Widget", "Rang\303\251es & colonnes occup\303\251es", nullptr));
        pushButtonReserver->setText(QApplication::translate("Widget", "R\303\251server >>", nullptr));
        pushButtonLiberer->setText(QApplication::translate("Widget", "<< Lib\303\251rer ", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
