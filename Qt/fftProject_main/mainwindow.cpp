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

