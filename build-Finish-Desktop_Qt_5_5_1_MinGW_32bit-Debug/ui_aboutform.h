/********************************************************************************
** Form generated from reading UI file 'aboutform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTFORM_H
#define UI_ABOUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AboutForm
{
public:
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QDialog *AboutForm)
    {
        if (AboutForm->objectName().isEmpty())
            AboutForm->setObjectName(QStringLiteral("AboutForm"));
        AboutForm->resize(543, 276);
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
        AboutForm->setPalette(palette);
        label = new QLabel(AboutForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 70, 151, 121));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon.png")));
        label->setScaledContents(true);
        label_4 = new QLabel(AboutForm);
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
        label_5 = new QLabel(AboutForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(208, 95, 131, 23));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_6 = new QLabel(AboutForm);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(240, 140, 131, 23));
        label_6->setFont(font1);
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_7 = new QLabel(AboutForm);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(310, 95, 131, 23));
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        label_7->setFont(font2);
        label_7->setLayoutDirection(Qt::LeftToRight);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_8 = new QLabel(AboutForm);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(310, 140, 221, 23));
        label_8->setFont(font2);
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_9 = new QLabel(AboutForm);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 192, 521, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setWeight(50);
        label_9->setFont(font3);
        label_9->setLayoutDirection(Qt::LeftToRight);
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(AboutForm);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 230, 521, 23));
        label_10->setFont(font3);
        label_10->setLayoutDirection(Qt::LeftToRight);
        label_10->setAlignment(Qt::AlignCenter);

        retranslateUi(AboutForm);

        QMetaObject::connectSlotsByName(AboutForm);
    } // setupUi

    void retranslateUi(QDialog *AboutForm)
    {
        AboutForm->setWindowTitle(QApplication::translate("AboutForm", "Dialog", 0));
        label->setText(QString());
        label_4->setText(QApplication::translate("AboutForm", "ADD NEW STUDENT", 0));
        label_5->setText(QApplication::translate("AboutForm", "Developer:", 0));
        label_6->setText(QApplication::translate("AboutForm", "E-mail:", 0));
        label_7->setText(QApplication::translate("AboutForm", "Tania Dmitrenko", 0));
        label_8->setText(QApplication::translate("AboutForm", "tanyamechanical@gmail.com", 0));
        label_9->setText(QApplication::translate("AboutForm", "All rights reserved.", 0));
        label_10->setText(QApplication::translate("AboutForm", "2016", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutForm: public Ui_AboutForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTFORM_H
