#include "database.h"

DataBase::DataBase()
{

}
void DataBase::LoadTable()
{
    model = new QSqlTableModel(0, database);
    model->setTable("student");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("LastName"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("FirstName"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("MiddleName"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Gender"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Faculty"));
    model->select();

}

void DataBase::Add(QString lastName, QString firstName, QString middleName, QString gender, QString faculty)
{
    int rowCount = model->rowCount();
    model->insertRow(rowCount);
    model->setData(model->index(rowCount, 1), lastName);
    model->setData(model->index(rowCount, 2), firstName);
    model->setData(model->index(rowCount, 3), middleName);
    model->setData(model->index(rowCount, 4), gender);
    model->setData(model->index(rowCount, 5), faculty);
    model->submitAll();
    /*QSqlQuery query;
    query.prepare("INSERT INTO student (LastName, FirstName, MiddleName, Gender, Faculty) "
                  "VALUES (?, ?, ?, ?, ?)");
    query.addBindValue(lastName);
    query.addBindValue(firstName);
    query.addBindValue(middleName);
    query.addBindValue(gender);
    query.addBindValue(faculty);
    query.exec();
    model->select();
    */
}
void DataBase::Init()
{
    ConnectToDB();
    LoadTable();
}

void DataBase::ConnectToDB()
{
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("127.0.0.1");
    database.setPort(3306);
    database.setDatabaseName("studentdb");
    database.setUserName("root");

//    if (!database.open()) {
//        qDebug() << database.lastError();
//    }
}
