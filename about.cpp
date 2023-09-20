#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);

    ui->lb_about->setText("\n"
                          "\tПрограмма для домашнего задания №4\n"
                          "\tВыполнил студент \"Нетологии\"\n"
                          "\tБелозеров Михаил\n\n"
                          "\t2023");

    ui->pb_OK->setText("OK");
}

About::~About()
{
    delete ui;
}

void About::on_pb_OK_clicked()
{
    close();
}
