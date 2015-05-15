/* Created by Alfredo Bonino
   Under GPL LICENSE Version 3, see the LICENSE file.
*/
#ifndef QSUDO_H
#define QSUDO_H
#include <QMainWindow>
extern QString program;
namespace Ui {
class qsudo;
}

class qsudo : public QMainWindow
{
    Q_OBJECT


public:
    explicit qsudo(QWidget *parent = 0);
    ~qsudo();
private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();
private:
    Ui::qsudo *ui;
};
#endif // QSUDO_H
