#include "konversionmainwin.h"
#include "ui_konversionmainwin.h"
#include <QtDebug>

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
    //qDebug() << QString(ui->Echelle->currentText());
    //qDebug() << ui->Echelle->currentIndex();
    //qDebug() << QString(ech[ui->Echelle->currentIndex()]);
    //qDebug() << ui->valueStart->value();
    //qDebug() << ui->valueEnd->value();



    formule_echelle(ui->valueStart->value(), ui->Echelle->currentIndex(), ui->UniteEchelleStart->currentIndex(), ui->UnieEchelleEnd->currentIndex());

    //int valeurConvertie = formule_echelle(ui->valueStart->value(), ui->Echelle->currentIndex(), ui->UniteEchelleStart->currentIndex(), ui->UnieEchelleEnd->currentIndex());
    //ui->Log->setText("1 mètre au 1/10 donne "+valeurConvertie+" millimètres \n");
}

int KonversionMainWin::formule_echelle(double dimension, int echelle, int uniteDepart, int uniteFin)
{
    QStringList ech;
    ech << "43.5" << "87.0857" << "48" << "76" << "80.5" << "20.3" << "22.5" << "10" << "30" << "100";

    int coef = 1;

    //En fonction de uniteDepart et de uniteFin, sélectionnera le bon coef
    if(uniteDepart == 0)
    {
        if(uniteFin == 0) { coef = 1000; }
        if(uniteFin == 1) { coef = 100; }
        if(uniteFin == 2) { coef = 1; }
    }
    if(uniteDepart == 1)
    {
        if(uniteFin == 0) { coef = 10; }
        if(uniteFin == 1) { coef = 1; }
        if(uniteFin == 2) { coef = 0.01; }
    }
    if(uniteDepart == 2)
    {
        if(uniteFin == 0) { coef = 1; }
        if(uniteFin == 1) { coef = 0.1; }
        if(uniteFin == 2) { coef = 0.001; }
    }

    int resultat = (dimension / ech[echelle]) * coef;

    qDebug() << resultat;

    //return resultat;
    return 1;


    /*
     * value START
     * 0 : Mètres
     * 1 : Centimètres
     * 2 : Millimètres
     *
     * value END
     * 0 : Millimètres
     * 1 : Centimètres
     * 2 : Mètres
     * */


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
    //Si unité d'échelle converti mètre
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
