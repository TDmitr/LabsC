#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QObject>
#include "addform.h"
#include "showform.h"
#include "aboutform.h"
#include "webform.h"

#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
        ui->setupUi(this);
    QObject::connect(ui->ExitButton, SIGNAL(released()), this, SLOT(quitButton_clicked()));
    QObject::connect(ui->AddButton, SIGNAL(released()), this, SLOT(addStudentButton_clicked()));
    QObject::connect(ui->showButton, SIGNAL(released()), this, SLOT(showButton_clicked()));
    QObject::connect(ui->AboutButton, SIGNAL(released()), this, SLOT(aboutButton_clicked()));
    QObject::connect(ui->VideoBtn, SIGNAL(released()), this, SLOT(videoButton_clicked()));

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
void MainWindow::showButton_clicked()
{
    ShowForm *show = new ShowForm();
    show->show();
}
void MainWindow::aboutButton_clicked()
{
    AboutForm *about = new AboutForm();
    about->show();
}
void MainWindow::videoButton_clicked()
{
       WebForm *w = new WebForm();
       w->show();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
   if((event->modifiers().testFlag(Qt::ControlModifier)) && event->key()== Qt::Key_D)
   {
       aboutButton_clicked();
   }
   if((event->modifiers().testFlag(Qt::ControlModifier)) && event->key()== Qt::Key_O)
   {
       showButton_clicked();
   }
   if((event->modifiers().testFlag(Qt::ControlModifier)) && event->key()== Qt::Key_W)
   {
       addStudentButton_clicked();
   }

}

