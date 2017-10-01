#include "konversionmainwin.h"
#include "ui_konversionmainwin.h"

KonversionMainWin::KonversionMainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KonversionMainWin)
{
    ui->setupUi(this);
}

KonversionMainWin::~KonversionMainWin()
{
    delete ui;
}
