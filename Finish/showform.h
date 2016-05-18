#ifndef SHOWFORM_H
#define SHOWFORM_H
#include <QStandardItemModel>

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class ShowForm;
}

class ShowForm : public QWidget
{
    Q_OBJECT

public:
    explicit ShowForm(QWidget *parent = 0);
    ~ShowForm();
    bool createConnection();
    void LoadTable();
    void Add(QString Name, QString Surname, int age, QString group);

private:
    Ui::ShowForm *ui;
    QStandardItemModel *_model;
    QSqlDatabase database;
    QSqlTableModel *model;



protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // SHOWFORM_H
