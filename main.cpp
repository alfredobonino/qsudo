/* Created by Alfredo Bonino
   Under GPL LICENSE Version 3, see the LICENSE file.
*/
#include "qsudo.h"
#include <QApplication>
#include <QCoreApplication>
#include <QProcess>
#include <QStyle>
#include <QDesktopWidget>
QString program;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qsudo w;
    program = QCoreApplication::arguments().at(1);
    w.setGeometry(
     QStyle::alignedRect(
     Qt::LeftToRight,
     Qt::AlignCenter,
     w.size(),
     a.desktop()->availableGeometry()
     ));
    w.setWindowFlags(Qt::FramelessWindowHint);
    w.setWindowFlags(Qt::CustomizeWindowHint);
    w.show();
    return a.exec();
}

