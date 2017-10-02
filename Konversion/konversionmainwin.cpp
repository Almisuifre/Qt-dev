#include "konversionmainwin.h"
#include "ui_konversionmainwin.h"
#include <QtDebug>

KonversionMainWin::KonversionMainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KonversionMainWin)
{
    ui->setupUi(this);

    QMap<QString, double> Map;

    Map.insert("Echelle 1/35 - Voie de 60 - Utilise de la voie Ho 16.5mm", 35);
    Map.insert("Echelle O 1/43,5 - British", 43.5);
    Map.insert("Echelle HO 1/87,0857", 87.0857);
    Map.insert("Echelle O 1/48", 48);
    Map.insert("Echelle OO 1/76", 76);
    Map.insert("Echelle OO 1/80.5", 80.5);
    Map.insert("Echelle G 1/20.3 - Bachnmann", 20.3);
    Map.insert("Echelle G 1/22.5 - LGB", 22.5);
    Map.insert("Echelle 1/10 - Dixième", 10);
    Map.insert("Echelle 1/30 - Trentième", 30);
    Map.insert("Echelle 1/100 - Centième", 100);

    QMap<QString, double>::iterator iter; //Itérator en fonction de Map
    for(iter = Map.begin(); iter != Map.end(); ++iter) //Parcourir la map
    {
        ui->Echelle->addItem(iter.key(), QVariant(iter.value())); //Récupérer les infos
    }

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

void KonversionMainWin::formule_echelle(double dimension, double echelle, int uniteDepart, int uniteFin)
{
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

    double resultat = ((dimension) / (echelle)) * coef;

    dimSaisie = dimension;
    echelleSaisie = echelle;
    resultatConversion = resultat;
}
