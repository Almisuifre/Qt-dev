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
    //int valeurConvertie = formule_echelle(ui->valueStart->value(), ui->Echelle->currentIndex(), ui->UniteEchelleStart->currentIndex(), ui->UnieEchelleEnd->currentIndex());
    //ui->Log->setText("1 mètre au 1/10 donne "+valeurConvertie+" millimètres \n");

    formule_echelle(ui->valueStart->value(), ui->Echelle->currentIndex(), ui->UniteEchelleStart->currentIndex(), ui->UnieEchelleEnd->currentIndex());

    if(resultatConversion != -1)
    {
        ui->Log->setText("Résultat pour l'éhelle 1/" +echelleSaisie+ " :" +dimSaisie+ " " +uniteFrom+ " -> " +resultatConversion+ " " +uniteTo+ ".\n");
    }
}

int KonversionMainWin::formule_echelle(double dimension, int echelle, int uniteDepart, int uniteFin)
{
    QList<double> ech;
    ech << 43.5 << 87.0857 << 48 << 76 << 80.5 << 20.3 << 22.5 << 10 << 30 << 100;

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

    double resultat = ((dimension) / (ech[echelle])) * coef;

    dimSaisie = dimension;
    echelleSaisie = ech[echelle];
    resultatConversion = resultat;
}
