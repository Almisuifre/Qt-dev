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

private:
    Ui::KonversionMainWin *ui;
};

#endif // KONVERSIONMAINWIN_H
