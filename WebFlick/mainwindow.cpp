#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QWebEngineView *view = new QWebEngineView(parent);
    view->load(QUrl("https://www.google.ru/"));
    view->show();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

