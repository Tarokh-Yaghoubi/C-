#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QFile>
#include <QDir>
#include <QDebug>
#include <QString>
#include <QTextStream>
#include <QColor>
#include <QColorDialog>
#include <QDataStream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <bits/stdc++.h>

#include <QtWidgets/QApplication>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>

#include <QTextEdit>
#include "ippcore.h"
#include "ipps.h"
#include "ippcc.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_generate_clicked();

    void on_pushButton_write_clicked();

    void on_pushButton_read_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

