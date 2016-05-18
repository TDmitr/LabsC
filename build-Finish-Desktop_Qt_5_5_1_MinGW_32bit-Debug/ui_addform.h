/********************************************************************************
** Form generated from reading UI file 'addform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFORM_H
#define UI_ADDFORM_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddForm
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QSpinBox *spinBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QPushButton *addButton;
    QPushButton *addGroupButton;

    void setupUi(QWidget *AddForm)
    {
        if (AddForm->objectName().isEmpty())
            AddForm->setObjectName(QStringLiteral("AddForm"));
        AddForm->resize(440, 341);
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
        AddForm->setPalette(palette);
        label = new QLabel(AddForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 80, 80, 23));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(AddForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 120, 80, 23));
        label_2->setFont(font);
        label_3 = new QLabel(AddForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 160, 80, 23));
        label_3->setFont(font);
        label_5 = new QLabel(AddForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 200, 80, 23));
        label_5->setFont(font);
        comboBox_2 = new QComboBox(AddForm);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(200, 200, 171, 23));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft JhengHei Light"));
        font1.setPointSize(12);
        comboBox_2->setFont(font1);
        spinBox = new QSpinBox(AddForm);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(200, 160, 80, 23));
        spinBox->setFont(font);
        lineEdit = new QLineEdit(AddForm);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 120, 200, 23));
        lineEdit->setFont(font1);
        lineEdit_2 = new QLineEdit(AddForm);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 80, 200, 23));
        lineEdit_2->setFont(font1);
        label_4 = new QLabel(AddForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 30, 411, 23));
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignCenter);
        addButton = new QPushButton(AddForm);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(20, 260, 401, 50));
        QFont font3;
        font3.setFamily(QStringLiteral("Microsoft YaHei Light"));
        font3.setPointSize(12);
        addButton->setFont(font3);
        addButton->setStyleSheet(QLatin1String("\n"
"background-color: rgb(85, 200, 43)"));
        addGroupButton = new QPushButton(AddForm);
        addGroupButton->setObjectName(QStringLiteral("addGroupButton"));
        addGroupButton->setGeometry(QRect(380, 199, 25, 25));
        addGroupButton->setFont(font3);
        addGroupButton->setStyleSheet(QStringLiteral("background-color: rgb(215, 255, 15)"));

        retranslateUi(AddForm);

        QMetaObject::connectSlotsByName(AddForm);
    } // setupUi

    void retranslateUi(QWidget *AddForm)
    {
        AddForm->setWindowTitle(QApplication::translate("AddForm", "Add Student", 0));
        label->setText(QApplication::translate("AddForm", "Name:", 0));
        label_2->setText(QApplication::translate("AddForm", "Surname:", 0));
        label_3->setText(QApplication::translate("AddForm", "Age:", 0));
        label_5->setText(QApplication::translate("AddForm", "Group", 0));
        label_4->setText(QApplication::translate("AddForm", "ADD NEW STUDENT", 0));
        addButton->setText(QApplication::translate("AddForm", "ADD", 0));
        addGroupButton->setText(QApplication::translate("AddForm", "+", 0));
    } // retranslateUi

};

namespace Ui {
    class AddForm: public Ui_AddForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFORM_H
