#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
   void quitButton_clicked();
   void addStudentButton_clicked();
   void showButton_clicked();
   void aboutButton_clicked();
   void videoButton_clicked();
protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // MAINWINDOW_H
