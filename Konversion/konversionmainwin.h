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

private slots:
    void on_pushButton_pressed();

private:
    Ui::KonversionMainWin *ui;
    void formule_echelle(double dimension, double echelle, int uniteDepart, int uniteFin);

    double dimSaisie = 0, echelleSaisie = 0, resultatConversion = -1;
    QString uniteFrom = "", uniteTo = "";
};

#endif // KONVERSIONMAINWIN_H
