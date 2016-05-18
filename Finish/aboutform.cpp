#include "aboutform.h"
#include "addform.h"
#include "showform.h"
#include "ui_aboutform.h"
#include <QKeyEvent>

AboutForm::AboutForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutForm)
{
    ui->setupUi(this);
}

AboutForm::~AboutForm()
{
    delete ui;
}

void AboutForm::keyPressEvent(QKeyEvent *event)
{
    if((event->modifiers().testFlag(Qt::ControlModifier)) && event->key()== Qt::Key_D)
    {
        this->close();
    }
   if((event->modifiers().testFlag(Qt::ControlModifier)) && event->key()== Qt::Key_O)
   {
       this->close();
       ShowForm *show = new ShowForm();
       show->show();
   }
   if((event->modifiers().testFlag(Qt::ControlModifier)) && event->key()== Qt::Key_W)
   {
       this->close();
       AddForm *show = new AddForm();
       show->show();
   }

}
