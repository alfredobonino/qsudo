/* Created by Alfredo Bonino
   Under GPL LICENSE Version 3, see the LICENSE file.
*/
#include "qsudo.h"
#include "ui_qsudo.h"
#include <QProcess>
extern QString program;
qsudo::qsudo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::qsudo)
   
{
    ui->setupUi(this);
    ui->rootPassword->setFocus();
}

qsudo::~qsudo()
{
    delete ui;
}
void qsudo::on_cancelButton_clicked() {
    qsudo::QMainWindow::close();

}

void qsudo::on_okButton_clicked() {
    QProcess *process;
    process = new QProcess();
    QString command = "echo " + ui->rootPassword->text() + " | sudo -S " + program;
    process->startDetached("/bin/bash", QStringList() << "-c" << command);
    process->close();
    qsudo::QMainWindow::close();
}
