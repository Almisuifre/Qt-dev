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

void KonversionMainWin::on_pushButton_pressed()
{

}

void KonversionMainWin::formule_echelle()
{
    //Si échelle sélectionné 1/10
    //Si unité d'échelle de départ mètre
    //Si unité d'échelle converti millimètre
    //-> (dimension départ / 10) * 1000

    //Si échelle sélectionné 1/10
    //Si unité d'échelle de départ mètre
    //Si unité d'échelle converti centimètre
    //-> (dimension départ / 10) * 100

    //Si échelle sélectionné 1/10
    //Si unité d'échelle de départ mètre
    //Si unité d'échelle converti mètre
    //-> (dimension départ / 10) * 1

    //-------------------------------------------

    //Si échelle sélectionné 1/10
    //Si unité d'échelle de départ centimètre
    //Si unité d'échelle converti millimètre
    //-> (dimension départ / 10) * 10

    //Si échelle sélectionné 1/10
    //Si unité d'échelle de départ centimètre
    //Si unité d'échelle converti centimètre
    //-> (dimension départ / 10) * 1

    //Si échelle sélectionné 1/10
    //Si unité d'échelle de départ centimètre
    //Si unité d'échelle converti mmètre
    //-> (dimension départ / 10) * 0.01

    //-------------------------------------------

    //Si échelle sélectionné 1/10
    //Si unité d'échelle de départ millimètre
    //Si unité d'échelle converti millimètre
    //-> (dimension départ / 10) * 1

    //Si échelle sélectionné 1/10
    //Si unité d'échelle de départ millimètre
    //Si unité d'échelle converti centimètre
    //-> (dimension départ / 10) * 0.1

    //Si échelle sélectionné 1/10
    //Si unité d'échelle de départ millimètre
    //Si unité d'échelle converti centimètre
    //-> (dimension départ / 10) * 0.001

}
