#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pb_progress_clicked();

    void on_rb_band1_clicked();

    void on_rb_band2_clicked();

private:
    Ui::MainWindow *ui;

    int c_min_progress = 0;
    int c_max_progress = 100;
    int c_step_progress = 10;

    QStringList LP_tracks{"Leave Out All the Rest", "One More Light", "In the End", "Numb", "Breaking the Habit"};
    QStringList ThSecToMars_tracks{"Up in the Air", "A Beautiful Lie", "From Yesterday", "Kings and Queens", "Oblivion"};

    void TracksInit();
};
#endif // MAINWINDOW_H
