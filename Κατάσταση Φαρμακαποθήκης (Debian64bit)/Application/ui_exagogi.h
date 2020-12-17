/********************************************************************************
** Form generated from reading UI file 'exagogi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAGOGI_H
#define UI_EXAGOGI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Exagogi
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QLineEdit *barcode;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *medicine;
    QVBoxLayout *expday;
    QVBoxLayout *arithmos;
    QVBoxLayout *mm;
    QVBoxLayout *posotita;
    QLabel *onoma_l;
    QLabel *mm_l;
    QLabel *poso_l;
    QLabel *arithomos_l;
    QLabel *exp_l;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *Exagogi)
    {
        if (Exagogi->objectName().isEmpty())
            Exagogi->setObjectName(QString::fromUtf8("Exagogi"));
        Exagogi->resize(661, 338);
        Exagogi->setStyleSheet(QString::fromUtf8("*{\n"
"	background:#e3d7f0;\n"
"}\n"
".QPushButton{\n"
"	border-radius: 8px;\n"
"	background:#557698;\n"
"	color:white;\n"
"}\n"
"\n"
".QPushButton:hover{\n"
"	background:#5696b6;\n"
"}\n"
"\n"
"#onoma_l{\n"
"	font-size:12px;\n"
"	color:#193c69;\n"
"}\n"
"\n"
"#mm_l{\n"
"	font-size:12px;\n"
"	color:#193c69;\n"
"}\n"
"\n"
"#poso_l{\n"
"	font-size:12px;\n"
"	color:#193c69;\n"
"}\n"
"\n"
"\n"
"#arithomos_l{\n"
"	font-size:12px;\n"
"	color:#193c69;\n"
"}\n"
"\n"
"#exp_l{\n"
"	font-size:12px;\n"
"	color:#193c69;\n"
"}\n"
""));
        gridLayout = new QGridLayout(Exagogi);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(Exagogi);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 22));

        gridLayout->addWidget(pushButton_2, 2, 2, 1, 1);

        barcode = new QLineEdit(Exagogi);
        barcode->setObjectName(QString::fromUtf8("barcode"));

        gridLayout->addWidget(barcode, 0, 0, 1, 1);

        scrollArea = new QScrollArea(Exagogi);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 641, 262));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea_2 = new QScrollArea(scrollAreaWidgetContents);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 621, 242));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        medicine = new QVBoxLayout();
        medicine->setObjectName(QString::fromUtf8("medicine"));

        gridLayout_3->addLayout(medicine, 1, 0, 1, 1);

        expday = new QVBoxLayout();
        expday->setObjectName(QString::fromUtf8("expday"));

        gridLayout_3->addLayout(expday, 1, 4, 1, 1);

        arithmos = new QVBoxLayout();
        arithmos->setObjectName(QString::fromUtf8("arithmos"));

        gridLayout_3->addLayout(arithmos, 1, 3, 1, 1);

        mm = new QVBoxLayout();
        mm->setObjectName(QString::fromUtf8("mm"));

        gridLayout_3->addLayout(mm, 1, 1, 1, 1);

        posotita = new QVBoxLayout();
        posotita->setObjectName(QString::fromUtf8("posotita"));

        gridLayout_3->addLayout(posotita, 1, 2, 1, 1);

        onoma_l = new QLabel(scrollAreaWidgetContents_2);
        onoma_l->setObjectName(QString::fromUtf8("onoma_l"));

        gridLayout_3->addWidget(onoma_l, 0, 0, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        mm_l = new QLabel(scrollAreaWidgetContents_2);
        mm_l->setObjectName(QString::fromUtf8("mm_l"));

        gridLayout_3->addWidget(mm_l, 0, 1, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        poso_l = new QLabel(scrollAreaWidgetContents_2);
        poso_l->setObjectName(QString::fromUtf8("poso_l"));

        gridLayout_3->addWidget(poso_l, 0, 2, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        arithomos_l = new QLabel(scrollAreaWidgetContents_2);
        arithomos_l->setObjectName(QString::fromUtf8("arithomos_l"));

        gridLayout_3->addWidget(arithomos_l, 0, 3, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        exp_l = new QLabel(scrollAreaWidgetContents_2);
        exp_l->setObjectName(QString::fromUtf8("exp_l"));

        gridLayout_3->addWidget(exp_l, 0, 4, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_2->addWidget(scrollArea_2, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(553, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        pushButton = new QPushButton(Exagogi);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 22));

        gridLayout->addWidget(pushButton, 0, 1, 1, 2);

        QWidget::setTabOrder(barcode, pushButton);
        QWidget::setTabOrder(pushButton, scrollArea);
        QWidget::setTabOrder(scrollArea, pushButton_2);

        retranslateUi(Exagogi);

        QMetaObject::connectSlotsByName(Exagogi);
    } // setupUi

    void retranslateUi(QDialog *Exagogi)
    {
        Exagogi->setWindowTitle(QApplication::translate("Exagogi", "\316\225\316\236\316\221\316\223\316\251\316\223\316\227", nullptr));
        pushButton_2->setText(QApplication::translate("Exagogi", "\316\221\317\200\316\277\316\270\316\256\316\272\316\265\317\205\317\203\316\267", nullptr));
        onoma_l->setText(QApplication::translate("Exagogi", "\316\237\316\235\316\237\316\234\316\221", nullptr));
        mm_l->setText(QApplication::translate("Exagogi", "\316\234\316\234", nullptr));
        poso_l->setText(QApplication::translate("Exagogi", "\316\240\316\237\316\243\316\237\316\244\316\227\316\244\316\221", nullptr));
        arithomos_l->setText(QApplication::translate("Exagogi", "\316\221\316\241\316\231\316\230\316\234\316\237\316\243", nullptr));
        exp_l->setText(QApplication::translate("Exagogi", "\316\227\316\234. \316\233\316\227\316\236\316\227\316\243", nullptr));
        pushButton->setText(QApplication::translate("Exagogi", "\316\221\316\275\316\261\316\266\316\256\317\204\316\267\317\203\316\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Exagogi: public Ui_Exagogi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAGOGI_H
