#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Домашнее задание №4");
    w.setMinimumSize(330, 260);
    w.setMaximumSize(600, 500);

    w.show();
    return a.exec();
}
