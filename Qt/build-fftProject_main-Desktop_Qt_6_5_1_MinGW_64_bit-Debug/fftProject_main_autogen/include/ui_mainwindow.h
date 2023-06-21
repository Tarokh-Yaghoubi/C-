/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_read;
    QPushButton *pushButton_generate;
    QPushButton *pushButton_write;
    QTextEdit *textEdit;
    QTextEdit *textEdit_writeFile;
    QPushButton *pushButton_chart;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 731);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(350, 620, 80, 61));
        pushButton_read = new QPushButton(centralwidget);
        pushButton_read->setObjectName("pushButton_read");
        pushButton_read->setGeometry(QRect(70, 70, 80, 71));
        pushButton_generate = new QPushButton(centralwidget);
        pushButton_generate->setObjectName("pushButton_generate");
        pushButton_generate->setGeometry(QRect(350, 70, 80, 71));
        pushButton_write = new QPushButton(centralwidget);
        pushButton_write->setObjectName("pushButton_write");
        pushButton_write->setGeometry(QRect(600, 70, 80, 71));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(60, 170, 311, 241));
        textEdit_writeFile = new QTextEdit(centralwidget);
        textEdit_writeFile->setObjectName("textEdit_writeFile");
        textEdit_writeFile->setGeometry(QRect(430, 170, 301, 241));
        pushButton_chart = new QPushButton(centralwidget);
        pushButton_chart->setObjectName("pushButton_chart");
        pushButton_chart->setGeometry(QRect(350, 490, 80, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        pushButton_read->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        pushButton_generate->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
        pushButton_write->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
        pushButton_chart->setText(QCoreApplication::translate("MainWindow", "Chart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
