#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


float randomFloat()
{
    return (float)(rand()) / (float)(rand());
}


void MainWindow::on_pushButton_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_generate_clicked()
{
    QFile File("myfilewrite.txt");

    std::vector<float>numbers;
    std::srand(std::time(nullptr));

    float randNum;


    if (File.open(QIODevice::Truncate | QIODevice::ReadWrite))
    {
        QTextStream stream(&File);
        for (int i = 0; i < 10240; i++)
        {
            randNum = randomFloat();
            numbers.push_back(randNum);
        }
        // append to the textBox
        for (int i = 0; i < 10240; i++)
        {
            QString currentRandNum = QString::number(numbers[i], 'f', 3);
            ui->textEdit_writeFile->append(currentRandNum);
        }
    }

    File.close();
}


void MainWindow::on_pushButton_write_clicked()
{

    QFile File("myfilewrite.txt");

    if (File.open(QIODevice::Truncate | QIODevice::ReadWrite))
    {
        QTextStream stream(&File);
        stream << ui->textEdit_writeFile->toPlainText();
    }
    File.close();
}


void MainWindow::on_pushButton_read_clicked()
{

    QFile File("myfilewrite.txt");

    if (File.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&File);
        QString FileData;
        while (stream.atEnd() == false)
        {
            FileData += stream.readLine() + "\n";
        }
        ui->textEdit->setText(FileData);

    }
}


void MainWindow::on_pushButton_chart_clicked()
{

    //![1]
    //!     //![1]
    QSplineSeries *series = new QSplineSeries();
    series->setName("spline");
    //![1]

    //![2]
    series->append(1, 2);
    series->append(2, 4);
    series->append(3, 4);
    series->append(3, 4);
    series->append(1, 9);
    *series << QPointF(11, 1) << QPointF(13, 3) << QPointF(17, 6) << QPointF(18, 3) << QPointF(20, 2);
    //![2]

    //![3]
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->setTitle("Simple spline chart example");
    chart->createDefaultAxes();
    chart->axes(Qt::Vertical).first()->setRange(0, 10);
    //![3]

    //![4]
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setAttribute(Qt::WA_DeleteOnClose, false);
    //![4]

    //![5]

    // It didn't work because it was defined on the stack ... so i used new to bring it on heap memory .

    QMainWindow *window = new QMainWindow();
    window->setCentralWidget(chartView);
    window->resize(400, 300);
    window->show();

}

