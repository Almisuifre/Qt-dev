/********************************************************************************
** Form generated from reading UI file 'konversionmainwin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KONVERSIONMAINWIN_H
#define UI_KONVERSIONMAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KonversionMainWin
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QComboBox *UniteEchelleStart;
    QComboBox *UnieEchelleEnd;
    QDoubleSpinBox *valueStart;
    QDoubleSpinBox *valueEnd;
    QComboBox *Echelle;
    QPushButton *pushButton;
    QGroupBox *groupBox_3;
    QTextEdit *Log;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KonversionMainWin)
    {
        if (KonversionMainWin->objectName().isEmpty())
            KonversionMainWin->setObjectName(QStringLiteral("KonversionMainWin"));
        KonversionMainWin->resize(717, 250);
        centralWidget = new QWidget(KonversionMainWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 271, 191));
        UniteEchelleStart = new QComboBox(groupBox);
        UniteEchelleStart->setObjectName(QStringLiteral("UniteEchelleStart"));
        UniteEchelleStart->setGeometry(QRect(160, 50, 101, 22));
        UnieEchelleEnd = new QComboBox(groupBox);
        UnieEchelleEnd->setObjectName(QStringLiteral("UnieEchelleEnd"));
        UnieEchelleEnd->setGeometry(QRect(160, 90, 101, 22));
        valueStart = new QDoubleSpinBox(groupBox);
        valueStart->setObjectName(QStringLiteral("valueStart"));
        valueStart->setGeometry(QRect(10, 50, 141, 22));
        valueStart->setDecimals(2);
        valueStart->setValue(1);
        valueEnd = new QDoubleSpinBox(groupBox);
        valueEnd->setObjectName(QStringLiteral("valueEnd"));
        valueEnd->setGeometry(QRect(10, 90, 141, 22));
        valueEnd->setDecimals(3);
        Echelle = new QComboBox(groupBox);
        Echelle->setObjectName(QStringLiteral("Echelle"));
        Echelle->setGeometry(QRect(10, 20, 251, 22));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 130, 251, 51));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(290, 0, 421, 191));
        Log = new QTextEdit(groupBox_3);
        Log->setObjectName(QStringLiteral("Log"));
        Log->setGeometry(QRect(10, 20, 401, 161));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush1(QColor(0, 170, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        QBrush brush4(QColor(240, 240, 240, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        Log->setPalette(palette);
        KonversionMainWin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(KonversionMainWin);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 717, 21));
        KonversionMainWin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(KonversionMainWin);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        KonversionMainWin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(KonversionMainWin);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        KonversionMainWin->setStatusBar(statusBar);

        retranslateUi(KonversionMainWin);

        QMetaObject::connectSlotsByName(KonversionMainWin);
    } // setupUi

    void retranslateUi(QMainWindow *KonversionMainWin)
    {
        KonversionMainWin->setWindowTitle(QApplication::translate("KonversionMainWin", "KonversionMainWin", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("KonversionMainWin", "Convertir", Q_NULLPTR));
        UniteEchelleStart->clear();
        UniteEchelleStart->insertItems(0, QStringList()
         << QApplication::translate("KonversionMainWin", "M\303\250tres", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "Centim\303\250tres", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "Millim\303\250tres", Q_NULLPTR)
        );
        UnieEchelleEnd->clear();
        UnieEchelleEnd->insertItems(0, QStringList()
         << QApplication::translate("KonversionMainWin", "Millim\303\250tres", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "Centim\303\250tres", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "M\303\250tres", Q_NULLPTR)
        );
        Echelle->clear();
        Echelle->insertItems(0, QStringList()
         << QApplication::translate("KonversionMainWin", "Echelle O British 1/43,5", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "Echelle HO 1/87,0857", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "Echelle O 1/48", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "Echelle OO 1/76", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "Echelle OO 1/80,5", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "Echelle G - Bachmann 1/20,3", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "Echelle G - LGB 1/22,5", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "Echelle 1/10", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "Echelle 1/30", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "Echelle 1/100", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("KonversionMainWin", "Conversion", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("KonversionMainWin", "Log", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KonversionMainWin: public Ui_KonversionMainWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KONVERSIONMAINWIN_H
