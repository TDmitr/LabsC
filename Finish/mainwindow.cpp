#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QObject>
#include "addform.h"
#include "showform.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
        ui->setupUi(this);
    QObject::connect(ui->ExitButton, SIGNAL(released()), this, SLOT(quitButton_clicked()));
    QObject::connect(ui->AddButton, SIGNAL(released()), this, SLOT(addStudentButton_clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::quitButton_clicked()
{
       exit(0);
}
void MainWindow::addStudentButton_clicked()
{
       AddForm *b = new AddForm();
       b->show();
}
