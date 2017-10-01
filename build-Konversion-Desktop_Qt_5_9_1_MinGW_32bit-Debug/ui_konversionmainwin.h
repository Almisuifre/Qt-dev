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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KonversionMainWin
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QComboBox *comboBox_3;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_3;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KonversionMainWin)
    {
        if (KonversionMainWin->objectName().isEmpty())
            KonversionMainWin->setObjectName(QStringLiteral("KonversionMainWin"));
        KonversionMainWin->resize(717, 334);
        centralWidget = new QWidget(KonversionMainWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 271, 191));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(160, 50, 101, 22));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(160, 90, 101, 22));
        doubleSpinBox = new QDoubleSpinBox(groupBox);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(10, 50, 141, 22));
        doubleSpinBox_2 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(10, 90, 141, 22));
        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(10, 20, 251, 22));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 130, 251, 51));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 200, 271, 71));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 20, 82, 17));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 40, 82, 17));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(290, 0, 421, 281));
        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 20, 401, 251));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        QBrush brush2(QColor(0, 170, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush3(QColor(255, 255, 220, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        plainTextEdit->setPalette(palette);
        QFont font;
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        font.setKerning(true);
        plainTextEdit->setFont(font);
        plainTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        plainTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
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
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("KonversionMainWin", "M\303\250tres", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "Centim\303\250tres", Q_NULLPTR)
         << QApplication::translate("KonversionMainWin", "Millim\303\250tres", Q_NULLPTR)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
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
        groupBox_2->setTitle(QApplication::translate("KonversionMainWin", "Modes", Q_NULLPTR));
        radioButton->setText(QApplication::translate("KonversionMainWin", "Automatique", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("KonversionMainWin", "Manuel", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("KonversionMainWin", "Log", Q_NULLPTR));
        plainTextEdit->setPlainText(QApplication::translate("KonversionMainWin", "Test\n"
"", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KonversionMainWin: public Ui_KonversionMainWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KONVERSIONMAINWIN_H
