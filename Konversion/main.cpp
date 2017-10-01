#include "konversionmainwin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KonversionMainWin w;
    w.show();

    return a.exec();
}
