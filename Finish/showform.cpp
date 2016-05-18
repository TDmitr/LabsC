#include "showform.h"
#include "aboutform.h"
#include "addform.h"
#include "ui_showform.h"
#include <QStandardItemModel>
#include <QKeyEvent>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QSqlTableModel>


ShowForm::ShowForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowForm)
{
    ui->setupUi(this);

    QStandardItemModel *model = new QStandardItemModel(0,5,this);
        model->setHorizontalHeaderItem(0,new QStandardItem(QString("Id")));

        model->setHorizontalHeaderItem(1,new QStandardItem(QString("Name")));
        model->setHorizontalHeaderItem(2,new QStandardItem(QString("Surname")));

        model->setHorizontalHeaderItem(3,new QStandardItem(QString("Age")));
        model->setHorizontalHeaderItem(4,new QStandardItem(QString("Group")));

        QStandardItem *firstRow1 = new QStandardItem(QString("1st"));
        model->setItem(0,0,firstRow1);


        ui->tableModel->setModel(model);
        _model = model;

        ui->tableModel->setColumnWidth(0,80);
        ui->tableModel->setColumnWidth(1,125);
        ui->tableModel->setColumnWidth(2,200);
        ui->tableModel->setColumnWidth(3,80);
        ui->tableModel->setColumnWidth(4,132);

}

ShowForm::~ShowForm()
{
    delete ui;
}

void ShowForm::keyPressEvent(QKeyEvent *event)
{
    if((event->modifiers().testFlag(Qt::ControlModifier)) && event->key()== Qt::Key_O)
    {
        this->close();
    }
   if((event->modifiers().testFlag(Qt::ControlModifier)) && event->key()== Qt::Key_D)
   {
       this->close();
       AboutForm *a = new AboutForm();
       a->show();
   }
   if((event->modifiers().testFlag(Qt::ControlModifier)) && event->key()== Qt::Key_W)
   {
       this->close();
       AddForm *add = new AddForm();
       add->show();
   }

}
bool ShowForm::createConnection(){
//    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("localhost");
//    db.setDatabaseName("studentdb");
//    db.setUserName("root");
//    db.setPassword("");
//    if (!db.open()) {
//        //qDebug() << "Database error occurred";
//        return false;
//    }
    return true;
}

void ShowForm::LoadTable()
{
    model = new QSqlTableModel(0, database);
    model->setTable("students");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("idstudents"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("name"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("surname"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("age"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("group"));
    model->select();
    ui->tableModel->setModel(model);
}

void ShowForm::Add(QString Name, QString Surname, int age, QString group)
{
    int rowCount = model->rowCount();
    model->insertRow(rowCount);
    model->setData(model->index(rowCount, 1), Name);
    model->setData(model->index(rowCount, 2), Surname);
    model->setData(model->index(rowCount, 3), age);
    model->setData(model->index(rowCount, 4), group);
    model->submitAll();
}
