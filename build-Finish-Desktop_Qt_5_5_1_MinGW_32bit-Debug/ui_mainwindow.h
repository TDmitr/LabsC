/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *showButton;
    QPushButton *AddButton;
    QPushButton *ExitButton;
    QPushButton *AboutButton;
    QPushButton *VideoBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 384);
        QPalette palette;
        QBrush brush(QColor(130, 217, 76, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(180, 255, 153, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(172, 240, 83, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        showButton = new QPushButton(centralWidget);
        showButton->setObjectName(QStringLiteral("showButton"));
        showButton->setGeometry(QRect(80, 40, 230, 50));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei Light"));
        font.setPointSize(12);
        showButton->setFont(font);
        showButton->setStyleSheet(QLatin1String("\n"
"background-color: rgb(85, 200, 43)"));
        AddButton = new QPushButton(centralWidget);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setGeometry(QRect(80, 100, 230, 50));
        AddButton->setFont(font);
        AddButton->setStyleSheet(QLatin1String("\n"
"background-color: rgb(85, 200, 43)"));
        ExitButton = new QPushButton(centralWidget);
        ExitButton->setObjectName(QStringLiteral("ExitButton"));
        ExitButton->setGeometry(QRect(80, 280, 230, 50));
        ExitButton->setFont(font);
        ExitButton->setStyleSheet(QLatin1String("\n"
"background-color: rgb(85, 200, 43)"));
        AboutButton = new QPushButton(centralWidget);
        AboutButton->setObjectName(QStringLiteral("AboutButton"));
        AboutButton->setGeometry(QRect(80, 160, 230, 50));
        AboutButton->setFont(font);
        AboutButton->setStyleSheet(QLatin1String("\n"
"background-color: rgb(85, 200, 43)"));
        VideoBtn = new QPushButton(centralWidget);
        VideoBtn->setObjectName(QStringLiteral("VideoBtn"));
        VideoBtn->setGeometry(QRect(80, 220, 230, 50));
        VideoBtn->setFont(font);
        VideoBtn->setStyleSheet(QLatin1String("\n"
"background-color: rgb(85, 200, 43)"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Student DataBase", 0));
        showButton->setText(QApplication::translate("MainWindow", "Show DataBase", 0));
        AddButton->setText(QApplication::translate("MainWindow", "New Student", 0));
        ExitButton->setText(QApplication::translate("MainWindow", "Exit", 0));
        AboutButton->setText(QApplication::translate("MainWindow", "About", 0));
        VideoBtn->setText(QApplication::translate("MainWindow", "Watch Video", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
