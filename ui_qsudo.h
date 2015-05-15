/********************************************************************************
** Form generated from reading UI file 'qsudo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSUDO_H
#define UI_QSUDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qsudo
{
public:
    QWidget *centralWidget;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLineEdit *rootPassword;
    QLabel *label;

    void setupUi(QMainWindow *qsudo)
    {
        if (qsudo->objectName().isEmpty())
            qsudo->setObjectName(QStringLiteral("qsudo"));
        qsudo->setWindowModality(Qt::WindowModal);
        qsudo->resize(414, 180);
        qsudo->setContextMenuPolicy(Qt::PreventContextMenu);
        centralWidget = new QWidget(qsudo);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        okButton = new QPushButton(centralWidget);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(210, 110, 161, 51));
        okButton->setFocusPolicy(Qt::NoFocus);
        okButton->setDefault(true);
        cancelButton = new QPushButton(centralWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(20, 110, 171, 51));
        cancelButton->setFlat(false);
        rootPassword = new QLineEdit(centralWidget);
        rootPassword->setObjectName(QStringLiteral("rootPassword"));
        rootPassword->setGeometry(QRect(20, 57, 371, 31));
        rootPassword->setFocusPolicy(Qt::StrongFocus);
        rootPassword->setDragEnabled(true);
        rootPassword->setClearButtonEnabled(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 351, 41));
        qsudo->setCentralWidget(centralWidget);
        cancelButton->raise();
        okButton->raise();
        rootPassword->raise();
        label->raise();

        retranslateUi(qsudo);

        QMetaObject::connectSlotsByName(qsudo);
    } // setupUi

    void retranslateUi(QMainWindow *qsudo)
    {
        qsudo->setWindowTitle(QApplication::translate("qsudo", "qsudo", 0));
        okButton->setText(QApplication::translate("qsudo", "OK", 0));
        cancelButton->setText(QApplication::translate("qsudo", "Cancel", 0));
        label->setText(QApplication::translate("qsudo", "Insert root password:", 0));
    } // retranslateUi

};

namespace Ui {
    class qsudo: public Ui_qsudo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSUDO_H
