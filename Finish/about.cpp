#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    QPixmap image("icon.png");
    ui->label->setPixmap(image);
}

About::~About()
{
    delete ui;
}
