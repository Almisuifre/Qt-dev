#ifndef KONVERSIONMAINWIN_H
#define KONVERSIONMAINWIN_H

#include <QMainWindow>

namespace Ui {
class KonversionMainWin;
}

class KonversionMainWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit KonversionMainWin(QWidget *parent = 0);
    ~KonversionMainWin();

    double dimSaisie = 0, echelleSaisie = 0, resultatConversion = -1;
    QString uniteFrom = "", uniteTo = "";

private slots:
    void on_pushButton_pressed();

private:
    Ui::KonversionMainWin *ui;
    int formule_echelle(double dimension, int echelle, int uniteDepart, int uniteFin);

};

#endif // KONVERSIONMAINWIN_H
