/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(536, 273);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(172, 240, 83, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        About->setPalette(palette);
        About->setAutoFillBackground(true);
        label_4 = new QLabel(About);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 20, 521, 23));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(About);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 190, 471, 23));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font1.setPointSize(12);
        font1.setItalic(false);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(About);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 90, 141, 23));
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_5 = new QLabel(About);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(240, 130, 141, 23));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_6 = new QLabel(About);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(305, 90, 201, 23));
        QFont font3;
        font3.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font3.setPointSize(11);
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_7 = new QLabel(About);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(300, 130, 211, 23));
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(About);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 230, 471, 23));
        QFont font4;
        font4.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font4.setPointSize(12);
        label_8->setFont(font4);
        label_8->setAlignment(Qt::AlignCenter);
        label = new QLabel(About);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 70, 141, 121));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon.png")));
        label->setScaledContents(false);

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About SD", 0));
        label_4->setText(QApplication::translate("About", "ABOUT STUDENT DATABASE", 0));
        label_2->setText(QApplication::translate("About", "All rights reserved.", 0));
        label_3->setText(QApplication::translate("About", "Developer:", 0));
        label_5->setText(QApplication::translate("About", "E-mail:", 0));
        label_6->setText(QApplication::translate("About", "Tania Dmitrenko", 0));
        label_7->setText(QApplication::translate("About", "tanyamechanical@gmail.com", 0));
        label_8->setText(QApplication::translate("About", "2016", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
