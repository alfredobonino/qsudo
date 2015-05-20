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
    QString command = "sudo " + program;
    QString pass = ui->rootPassword->text();
    QByteArray password = pass.toUtf8();
    process->start(command);
    process->write(password + "\n");
    process->waitForFinished(1);
    qsudo::QMainWindow::close();
}
