#include "addform.h"
#include "aboutform.h"
#include "showform.h"
#include "ui_addform.h"
#include <QKeyEvent>

AddForm::AddForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddForm)
{
    ui->setupUi(this);
}

AddForm::~AddForm()
{
    delete ui;
}

