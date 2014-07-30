/********************************************************************************
** Form generated from reading UI file 'fdform.ui'
**
** Created: Thu 31. Jul 02:07:29 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FDFORM_H
#define UI_FDFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FDForm
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_33;
    QSpacerItem *horizontalSpacer_44;
    QSpacerItem *horizontalSpacer_46;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_41;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *PAmount;
    QSpacerItem *horizontalSpacer_24;
    QSpacerItem *horizontalSpacer_34;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_43;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_40;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *Interest;
    QSpacerItem *horizontalSpacer_25;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *horizontalSpacer_42;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_39;
    QSpacerItem *horizontalSpacer_35;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *Month;
    QSpacerItem *horizontalSpacer_45;
    QSpacerItem *horizontalSpacer_19;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *horizontalSpacer_36;
    QSpacerItem *horizontalSpacer_37;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_38;
    QSpacerItem *horizontalSpacer_23;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *Submit;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *Clear;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_28;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *TotalIntrest;
    QSpacerItem *horizontalSpacer_27;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_26;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *TotalMaturity;
    QSpacerItem *horizontalSpacer_31;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_30;
    QSpacerItem *horizontalSpacer_29;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_32;
    QSpacerItem *verticalSpacer;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FDForm)
    {
        if (FDForm->objectName().isEmpty())
            FDForm->setObjectName(QString::fromUtf8("FDForm"));
        FDForm->resize(596, 358);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(240, 91, 46, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 178, 154, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(247, 134, 100, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(120, 45, 23, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(160, 60, 30, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(247, 173, 150, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        FDForm->setPalette(palette);
        centralWidget = new QWidget(FDForm);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_33);

        horizontalSpacer_44 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_44);

        horizontalSpacer_46 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_46);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        label_3->setPalette(palette1);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_41 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_41);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        PAmount = new QLineEdit(centralWidget);
        PAmount->setObjectName(QString::fromUtf8("PAmount"));

        horizontalLayout_2->addWidget(PAmount);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_24);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_34);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_15);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_16);

        horizontalSpacer_43 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_43);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_40 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_40);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        Interest = new QLineEdit(centralWidget);
        Interest->setObjectName(QString::fromUtf8("Interest"));

        horizontalLayout_3->addWidget(Interest);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_25);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_17);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_18);

        horizontalSpacer_42 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_42);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_39 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_39);

        horizontalSpacer_35 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_35);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        Month = new QComboBox(centralWidget);
        Month->setObjectName(QString::fromUtf8("Month"));

        horizontalLayout_4->addWidget(Month);

        horizontalSpacer_45 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_45);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_19);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_20);

        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_36);

        horizontalSpacer_37 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_37);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        horizontalSpacer_38 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_38);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_23);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_22);

        Submit = new QPushButton(centralWidget);
        Submit->setObjectName(QString::fromUtf8("Submit"));
        QPalette palette2;
        QBrush brush9(QColor(176, 176, 176, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        Submit->setPalette(palette2);

        horizontalLayout_6->addWidget(Submit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        Clear->setPalette(palette3);

        horizontalLayout_6->addWidget(Clear);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_21);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_28);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        TotalIntrest = new QLineEdit(centralWidget);
        TotalIntrest->setObjectName(QString::fromUtf8("TotalIntrest"));

        horizontalLayout_7->addWidget(TotalIntrest);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_27);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_26);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        horizontalLayout_8->addWidget(label_8);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        TotalMaturity = new QLineEdit(centralWidget);
        TotalMaturity->setObjectName(QString::fromUtf8("TotalMaturity"));

        horizontalLayout_8->addWidget(TotalMaturity);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_31);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_30);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_29);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_32);


        verticalLayout->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        FDForm->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(FDForm);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        FDForm->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FDForm);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        FDForm->setStatusBar(statusBar);

        retranslateUi(FDForm);

        QMetaObject::connectSlotsByName(FDForm);
    } // setupUi

    void retranslateUi(QMainWindow *FDForm)
    {
        FDForm->setWindowTitle(QApplication::translate("FDForm", "FDForm", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FDForm", "Fixed Deposit Calculator", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FDForm", "(FD maturity Calculator)", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FDForm", "  Principal  Amount  / Deposit Amt                ", 0, QApplication::UnicodeUTF8));
        PAmount->setPlaceholderText(QApplication::translate("FDForm", "Amount in Rupees", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FDForm", "       Interest  Rate         ", 0, QApplication::UnicodeUTF8));
        Interest->setPlaceholderText(QApplication::translate("FDForm", "Interest in %", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FDForm", "   Period of Deposit in Days :    ", 0, QApplication::UnicodeUTF8));
        Month->clear();
        Month->insertItems(0, QStringList()
         << QApplication::translate("FDForm", "Days", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "60", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "90", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "120", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "150", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "180", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "210", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "240", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "270", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "300", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "330", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "360", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "390", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "420", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "450", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "480", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "510", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "540", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "570", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "630", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "660", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "690", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "720", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "750", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "780", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "810", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "840", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "870", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "900", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "930", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "960", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "990", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "1020", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "1050", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "1080", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "1110", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "1140", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "1170", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FDForm", "1200", 0, QApplication::UnicodeUTF8)
        );
        Submit->setText(QApplication::translate("FDForm", "Submit", 0, QApplication::UnicodeUTF8));
        Clear->setText(QApplication::translate("FDForm", "clear", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("FDForm", "Total Interest Receivable", 0, QApplication::UnicodeUTF8));
        TotalIntrest->setPlaceholderText(QApplication::translate("FDForm", "Final Interest", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("FDForm", "TOTAL MATURITY AMOUNT ", 0, QApplication::UnicodeUTF8));
        TotalMaturity->setPlaceholderText(QApplication::translate("FDForm", "In Rupees", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FDForm: public Ui_FDForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FDFORM_H
