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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KonversionMainWin
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QDoubleSpinBox *valueStart;
    QComboBox *Echelle;
    QComboBox *UniteEchelleStart;
    QPushButton *pushButton;
    QDoubleSpinBox *valueEnd;
    QComboBox *UnieEchelleEnd;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QTextEdit *Log;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KonversionMainWin)
    {
        if (KonversionMainWin->objectName().isEmpty())
            KonversionMainWin->setObjectName(QStringLiteral("KonversionMainWin"));
        KonversionMainWin->resize(649, 378);
        centralWidget = new QWidget(KonversionMainWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        valueStart = new QDoubleSpinBox(groupBox);
        valueStart->setObjectName(QStringLiteral("valueStart"));
        valueStart->setDecimals(2);
        valueStart->setValue(1);

        gridLayout->addWidget(valueStart, 1, 0, 1, 1);

        Echelle = new QComboBox(groupBox);
        Echelle->setObjectName(QStringLiteral("Echelle"));

        gridLayout->addWidget(Echelle, 0, 0, 1, 2);

        UniteEchelleStart = new QComboBox(groupBox);
        UniteEchelleStart->setObjectName(QStringLiteral("UniteEchelleStart"));

        gridLayout->addWidget(UniteEchelleStart, 1, 1, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 3, 0, 1, 2);

        valueEnd = new QDoubleSpinBox(groupBox);
        valueEnd->setObjectName(QStringLiteral("valueEnd"));
        valueEnd->setDecimals(3);
        valueEnd->setMaximum(1e+6);

        gridLayout->addWidget(valueEnd, 2, 0, 1, 1);

        UnieEchelleEnd = new QComboBox(groupBox);
        UnieEchelleEnd->setObjectName(QStringLiteral("UnieEchelleEnd"));

        gridLayout->addWidget(UnieEchelleEnd, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 2);


        horizontalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        Log = new QTextEdit(groupBox_3);
        Log->setObjectName(QStringLiteral("Log"));
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
        Log->setFrameShape(QFrame::Box);
        Log->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        Log->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        Log->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        Log->setLineWrapMode(QTextEdit::WidgetWidth);

        gridLayout_2->addWidget(Log, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_3);

        KonversionMainWin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(KonversionMainWin);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 649, 21));
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
        pushButton->setText(QApplication::translate("KonversionMainWin", "Conversion", Q_NULLPTR));
        UnieEchelleEnd->clear();
        UnieEchelleEnd->insertItems(0, QStringList()
         << QApplication::translate("KonversionMainWin", "Millim\303\250tres", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "Centim\303\250tres", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "M\303\250tres", Q_NULLPTR)
        );
        groupBox_3->setTitle(QApplication::translate("KonversionMainWin", "Log", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KonversionMainWin: public Ui_KonversionMainWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KONVERSIONMAINWIN_H
