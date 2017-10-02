#include "konversionmainwin.h"
#include "ui_konversionmainwin.h"
#include <QtDebug>

KonversionMainWin::KonversionMainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KonversionMainWin)
{
    ui->setupUi(this);

    ui->Echelle->addItem("Echelle 1/35 - Voie de 60 - Utilise de la voie Ho 16.5mm", QVariant(35));
    ui->Echelle->addItem("Echelle O - British 1/43,5", QVariant(43.5));
    ui->Echelle->addItem("Echelle HO 1/87,0857", QVariant(43.5));
    ui->Echelle->addItem("Echelle O 1/48", QVariant(48));
    ui->Echelle->addItem("Echelle OO 1/76", QVariant(76));
    ui->Echelle->addItem("Echelle OO 1/80.5", QVariant(80.5));
    ui->Echelle->addItem("Echelle G - Bachnmann 1/20.3", QVariant(20.3));
    ui->Echelle->addItem("Echelle G - LGB 1/22.5", QVariant(22.5));
    ui->Echelle->addItem("Echelle 1/10", QVariant(10));
    ui->Echelle->addItem("Echelle 1/30", QVariant(30));
    ui->Echelle->addItem("Echelle 1/100", QVariant(100));
}

KonversionMainWin::~KonversionMainWin()
{
    delete ui;
}

void KonversionMainWin::on_pushButton_pressed()
{
    formule_echelle(ui->valueStart->value(), ui->Echelle->currentData().toDouble(), ui->UniteEchelleStart->currentIndex(), ui->UnieEchelleEnd->currentIndex());


    if(resultatConversion != -1)
    {
        ui->valueEnd->setValue(resultatConversion);
        ui->Log->append("Résultat pour l'éhelle 1/" +QString::number(echelleSaisie, 'f', 4)+ " : " +QString::number(dimSaisie, 'f', 2)+ " " +uniteFrom+ " -> " +QString::number(resultatConversion, 'f', 3)+ " " +uniteTo+ ".");
    }

}

int KonversionMainWin::formule_echelle(double dimension, double echelle, int uniteDepart, int uniteFin)
{
    /*QList<double> ech;
    ech << 43.5 << 87.0857 << 48 << 76 << 80.5 << 20.3 << 22.5 << 10 << 30 << 100;*/

    int coef = 1;

    //En fonction de uniteDepart et de uniteFin, sélectionnera le bon coef
    if(uniteDepart == 0) // 0 : Mètres
    {
        uniteFrom = "m";
        if(uniteFin == 0) { coef = 1000; uniteTo = "mm"; }  // 0 : Millimètres
        if(uniteFin == 1) { coef = 100; uniteTo = "cm"; }   // 1 : Centimètres
        if(uniteFin == 2) { coef = 1; uniteTo = "m"; }     // 2 : Mètres
    }
    if(uniteDepart == 1) // 1 : Centimètres
    {
        uniteFrom = "cm";
        if(uniteFin == 0) { coef = 10; uniteTo = "mm"; }    // 0 : Millimètres
        if(uniteFin == 1) { coef = 1; uniteTo = "cm"; }     // 1 : Centimètres
        if(uniteFin == 2) { coef = 0.01; uniteTo = "m"; }  // 2 : Mètres
    }
    if(uniteDepart == 2) //2 : Millimètres
    {
        uniteFrom = "mm";
        if(uniteFin == 0) { coef = 1; uniteTo = "mm"; }     //0 : Millimètres
        if(uniteFin == 1) { coef = 0.1; uniteTo = "cm"; }   // 1 : Centimètres
        if(uniteFin == 2) { coef = 0.001; uniteTo = "m"; } // 2 : Mètres
    }

    //double resultat = ((dimension) / (ech[echelle])) * coef;
    double resultat = ((dimension) / (echelle)) * coef;

    dimSaisie = dimension;
    echelleSaisie = echelle;
    resultatConversion = resultat;
}
