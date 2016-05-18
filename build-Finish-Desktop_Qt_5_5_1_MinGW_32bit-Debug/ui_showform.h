/********************************************************************************
** Form generated from reading UI file 'showform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWFORM_H
#define UI_SHOWFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowForm
{
public:
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QSpinBox *spinBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *addButton;
    QPushButton *addButton_2;
    QTableView *tableModel;

    void setupUi(QWidget *ShowForm)
    {
        if (ShowForm->objectName().isEmpty())
            ShowForm->setObjectName(QStringLiteral("ShowForm"));
        ShowForm->resize(728, 439);
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
        ShowForm->setPalette(palette);
        label_4 = new QLabel(ShowForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 20, 711, 23));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(ShowForm);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 60, 481, 23));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft JhengHei Light"));
        font1.setPointSize(12);
        lineEdit_2->setFont(font1);
        comboBox_2 = new QComboBox(ShowForm);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(190, 150, 481, 23));
        comboBox_2->setFont(font1);
        label_3 = new QLabel(ShowForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 120, 80, 23));
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font2.setPointSize(12);
        label_3->setFont(font2);
        label_2 = new QLabel(ShowForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 90, 80, 23));
        label_2->setFont(font2);
        label_5 = new QLabel(ShowForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 150, 80, 23));
        label_5->setFont(font2);
        spinBox = new QSpinBox(ShowForm);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(190, 120, 201, 23));
        spinBox->setFont(font2);
        lineEdit = new QLineEdit(ShowForm);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 90, 481, 23));
        lineEdit->setFont(font1);
        label = new QLabel(ShowForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 80, 23));
        label->setFont(font2);
        addButton = new QPushButton(ShowForm);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(510, 190, 161, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Microsoft YaHei Light"));
        font3.setPointSize(12);
        addButton->setFont(font3);
        addButton->setStyleSheet(QLatin1String("\n"
"background-color: rgb(85, 200, 43)"));
        addButton_2 = new QPushButton(ShowForm);
        addButton_2->setObjectName(QStringLiteral("addButton_2"));
        addButton_2->setGeometry(QRect(340, 190, 161, 31));
        addButton_2->setFont(font3);
        addButton_2->setStyleSheet(QLatin1String("\n"
"background-color: rgb(85, 200, 43)"));
        tableModel = new QTableView(ShowForm);
        tableModel->setObjectName(QStringLiteral("tableModel"));
        tableModel->setGeometry(QRect(50, 251, 621, 171));
        QFont font4;
        font4.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font4.setPointSize(11);
        tableModel->setFont(font4);

        retranslateUi(ShowForm);

        QMetaObject::connectSlotsByName(ShowForm);
    } // setupUi

    void retranslateUi(QWidget *ShowForm)
    {
        ShowForm->setWindowTitle(QApplication::translate("ShowForm", "Form", 0));
        label_4->setText(QApplication::translate("ShowForm", "SEARCH STUDENT", 0));
        label_3->setText(QApplication::translate("ShowForm", "Age:", 0));
        label_2->setText(QApplication::translate("ShowForm", "Surname:", 0));
        label_5->setText(QApplication::translate("ShowForm", "Group", 0));
        label->setText(QApplication::translate("ShowForm", "Name:", 0));
        addButton->setText(QApplication::translate("ShowForm", "Search", 0));
        addButton_2->setText(QApplication::translate("ShowForm", "Refresh", 0));
    } // retranslateUi

};

namespace Ui {
    class ShowForm: public Ui_ShowForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWFORM_H
