/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLabel *txtNumber;
    QPushButton *btnNumb_1;
    QPushButton *btnNumb_2;
    QPushButton *btnNumb_3;
    QPushButton *btnClear;
    QPushButton *btnNumb_4;
    QPushButton *btnNumb_5;
    QPushButton *btnNumb_6;
    QPushButton *btnPlus;
    QPushButton *btnNumb_7;
    QPushButton *btnNumb_8;
    QPushButton *btnNumb_9;
    QPushButton *btnMinus;
    QPushButton *btnNumb_10;
    QPushButton *btnEqual;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(376, 200);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        txtNumber = new QLabel(Widget);
        txtNumber->setObjectName(QString::fromUtf8("txtNumber"));
        QFont font;
        font.setPointSize(12);
        txtNumber->setFont(font);
        txtNumber->setLayoutDirection(Qt::RightToLeft);
        txtNumber->setAutoFillBackground(true);
        txtNumber->setFrameShape(QFrame::Box);
        txtNumber->setLineWidth(2);
        txtNumber->setMidLineWidth(0);

        gridLayout->addWidget(txtNumber, 0, 0, 1, 4);

        btnNumb_1 = new QPushButton(Widget);
        btnNumb_1->setObjectName(QString::fromUtf8("btnNumb_1"));

        gridLayout->addWidget(btnNumb_1, 1, 0, 1, 1);

        btnNumb_2 = new QPushButton(Widget);
        btnNumb_2->setObjectName(QString::fromUtf8("btnNumb_2"));

        gridLayout->addWidget(btnNumb_2, 1, 1, 1, 1);

        btnNumb_3 = new QPushButton(Widget);
        btnNumb_3->setObjectName(QString::fromUtf8("btnNumb_3"));

        gridLayout->addWidget(btnNumb_3, 1, 2, 1, 1);

        btnClear = new QPushButton(Widget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(btnClear, 1, 3, 1, 1);

        btnNumb_4 = new QPushButton(Widget);
        btnNumb_4->setObjectName(QString::fromUtf8("btnNumb_4"));

        gridLayout->addWidget(btnNumb_4, 2, 0, 1, 1);

        btnNumb_5 = new QPushButton(Widget);
        btnNumb_5->setObjectName(QString::fromUtf8("btnNumb_5"));

        gridLayout->addWidget(btnNumb_5, 2, 1, 1, 1);

        btnNumb_6 = new QPushButton(Widget);
        btnNumb_6->setObjectName(QString::fromUtf8("btnNumb_6"));

        gridLayout->addWidget(btnNumb_6, 2, 2, 1, 1);

        btnPlus = new QPushButton(Widget);
        btnPlus->setObjectName(QString::fromUtf8("btnPlus"));

        gridLayout->addWidget(btnPlus, 2, 3, 1, 1);

        btnNumb_7 = new QPushButton(Widget);
        btnNumb_7->setObjectName(QString::fromUtf8("btnNumb_7"));

        gridLayout->addWidget(btnNumb_7, 3, 0, 1, 1);

        btnNumb_8 = new QPushButton(Widget);
        btnNumb_8->setObjectName(QString::fromUtf8("btnNumb_8"));

        gridLayout->addWidget(btnNumb_8, 3, 1, 1, 1);

        btnNumb_9 = new QPushButton(Widget);
        btnNumb_9->setObjectName(QString::fromUtf8("btnNumb_9"));

        gridLayout->addWidget(btnNumb_9, 3, 2, 1, 1);

        btnMinus = new QPushButton(Widget);
        btnMinus->setObjectName(QString::fromUtf8("btnMinus"));

        gridLayout->addWidget(btnMinus, 3, 3, 1, 1);

        btnNumb_10 = new QPushButton(Widget);
        btnNumb_10->setObjectName(QString::fromUtf8("btnNumb_10"));

        gridLayout->addWidget(btnNumb_10, 4, 1, 1, 1);

        btnEqual = new QPushButton(Widget);
        btnEqual->setObjectName(QString::fromUtf8("btnEqual"));
        btnEqual->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(btnEqual, 4, 3, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Calculator", nullptr));
        txtNumber->setText(QString());
        btnNumb_1->setText(QApplication::translate("Widget", "1", nullptr));
        btnNumb_2->setText(QApplication::translate("Widget", "2", nullptr));
        btnNumb_3->setText(QApplication::translate("Widget", "3", nullptr));
        btnClear->setText(QApplication::translate("Widget", "C", nullptr));
        btnNumb_4->setText(QApplication::translate("Widget", "4", nullptr));
        btnNumb_5->setText(QApplication::translate("Widget", "5", nullptr));
        btnNumb_6->setText(QApplication::translate("Widget", "6", nullptr));
        btnPlus->setText(QApplication::translate("Widget", "+", nullptr));
        btnNumb_7->setText(QApplication::translate("Widget", "7", nullptr));
        btnNumb_8->setText(QApplication::translate("Widget", "8", nullptr));
        btnNumb_9->setText(QApplication::translate("Widget", "9", nullptr));
        btnMinus->setText(QApplication::translate("Widget", "-", nullptr));
        btnNumb_10->setText(QApplication::translate("Widget", "0", nullptr));
        btnEqual->setText(QApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
