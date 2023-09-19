#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->grB_bands->setTitle("Музыкальные группы");
    ui->rb_band1->setText("Linkin Park");
    ui->rb_band2->setText("30 Second To Mars");

    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);

    ui->pb_progress->setText("Обновить строку прогресса");

    ui->rb_band1->setChecked(true);
    ui->rb_band2->setChecked(false);

    ui->pb_progress->setCheckable(true);

    TracksInit();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_progress_clicked()
{
    if (ui->progressBar->value() == c_max_progress)
        ui->progressBar->setValue(c_min_progress);
    else
        ui->progressBar->setValue(ui->progressBar->value() + 10);
}

void MainWindow::TracksInit() {
    ui->cBox_tracks->clear();

    if (ui->rb_band1->isChecked())
        ui->cBox_tracks->addItems(LP_tracks);

    if (ui->rb_band2->isChecked())
        ui->cBox_tracks->addItems(ThSecToMars_tracks);
}

void MainWindow::on_rb_band1_clicked()
{
    TracksInit();
}

void MainWindow::on_rb_band2_clicked()
{
    TracksInit();
}
