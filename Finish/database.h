#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlTableModel>

class ShowForm;

class DataBase
{
public:
    DataBase();
    void Init();
    void ConnectToDB();
    void LoadTable();
    void Add(QString lastName, QString firstName, QString middleName, QString gender, QString faculty);
   // void Edit();
   // void Delete();

private:
    QSqlDatabase database;
    QSqlTableModel *model;
    ShowForm *showform;


};

#endif // DATABASE_H
