#include "showform.h"
#include "ui_showform.h"

ShowForm::ShowForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowForm)
{
    ui->setupUi(this);
}

ShowForm::~ShowForm()
{
    delete ui;
}
