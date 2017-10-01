#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtMultimedia/QMediaPlaylist>
#include <QtMultimedia/QMediaPlayer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->selectStations->addItem("http://direct.franceinter.fr/live/franceinter-midfi.mp3");
    ui->selectStations->addItem("http://vr-live-mp3-128.scdn.arkena.com/virginradio.mp3");

    //Premier exemple
    playList = new QMediaPlaylist(this);
    playList->addMedia(QUrl("http://direct.franceinter.fr/live/franceinter-midfi.mp3"));
    playList->addMedia(QUrl("http://vr-live-mp3-128.scdn.arkena.com/virginradio.mp3"));
    playList->setCurrentIndex(ui->selectStations->currentIndex());


    player = new QMediaPlayer(this);
    //player->setPlaylist(playList);
    //player->play();

    //Le volume
    int vol = ui->volume->value();
    player->setVolume(vol);
    ui->LCDVolume->display(vol);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_volume_valueChanged(int value)
{
    player->setVolume(value);
    ui->LCDVolume->display(value);
}

void MainWindow::on_Lire_clicked()
{
    //player = new QMediaPlayer(this);
    //playList->addMedia(QUrl(ui->selectStations->currentText()));
    playList->setCurrentIndex(ui->selectStations->currentIndex() - 1);

    //player = new QMediaPlayer(this);
    player->setPlaylist(playList);
    player->play();

}
