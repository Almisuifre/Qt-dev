#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class QMediaPlaylist;
class QMediaPlayer;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_volume_valueChanged(int value);

    void on_Lire_clicked();

private:
    Ui::MainWindow *ui;

    QMediaPlaylist *playList;
    QMediaPlayer *player;
};

#endif // MAINWINDOW_H
