/********************************************************************************
** Form generated from reading UI file 'eisagogi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EISAGOGI_H
#define UI_EISAGOGI_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Eisagogi
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *new_med;
    QPushButton *katahorisi;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLineEdit *onoma;
    QLineEdit *katigoria;
    QLabel *arithmos_label;
    QSpinBox *arithmos;
    QGridLayout *gridLayout_3;
    QLineEdit *barcode;
    QLabel *label;
    QDateEdit *expday;
    QLineEdit *mm;
    QSpinBox *posotita;
    QLabel *poso_label;
    QComboBox *category_cb;
    QLabel *message;

    void setupUi(QDialog *Eisagogi)
    {
        if (Eisagogi->objectName().isEmpty())
            Eisagogi->setObjectName(QString::fromUtf8("Eisagogi"));
        Eisagogi->resize(233, 337);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Eisagogi->sizePolicy().hasHeightForWidth());
        Eisagogi->setSizePolicy(sizePolicy);
        Eisagogi->setStyleSheet(QString::fromUtf8("*{\n"
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
        gridLayout_2 = new QGridLayout(Eisagogi);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        new_med = new QPushButton(Eisagogi);
        new_med->setObjectName(QString::fromUtf8("new_med"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(new_med->sizePolicy().hasHeightForWidth());
        new_med->setSizePolicy(sizePolicy1);
        new_med->setMinimumSize(QSize(45, 22));
        new_med->setMaximumSize(QSize(16777215, 16777215));
        new_med->setSizeIncrement(QSize(0, 0));

        horizontalLayout->addWidget(new_med);

        katahorisi = new QPushButton(Eisagogi);
        katahorisi->setObjectName(QString::fromUtf8("katahorisi"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(katahorisi->sizePolicy().hasHeightForWidth());
        katahorisi->setSizePolicy(sizePolicy2);
        katahorisi->setMinimumSize(QSize(0, 22));

        horizontalLayout->addWidget(katahorisi);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        onoma = new QLineEdit(Eisagogi);
        onoma->setObjectName(QString::fromUtf8("onoma"));

        gridLayout->addWidget(onoma, 5, 0, 1, 1);

        katigoria = new QLineEdit(Eisagogi);
        katigoria->setObjectName(QString::fromUtf8("katigoria"));

        gridLayout->addWidget(katigoria, 4, 0, 1, 1);

        arithmos_label = new QLabel(Eisagogi);
        arithmos_label->setObjectName(QString::fromUtf8("arithmos_label"));

        gridLayout->addWidget(arithmos_label, 9, 0, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        arithmos = new QSpinBox(Eisagogi);
        arithmos->setObjectName(QString::fromUtf8("arithmos"));

        gridLayout->addWidget(arithmos, 10, 0, 1, 1, Qt::AlignTop);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));

        gridLayout->addLayout(gridLayout_3, 0, 1, 1, 1);

        barcode = new QLineEdit(Eisagogi);
        barcode->setObjectName(QString::fromUtf8("barcode"));

        gridLayout->addWidget(barcode, 2, 0, 1, 1);

        label = new QLabel(Eisagogi);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 7, 0, 1, 1);

        expday = new QDateEdit(Eisagogi);
        expday->setObjectName(QString::fromUtf8("expday"));
        expday->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        expday->setCalendarPopup(true);
        expday->setDate(QDate(2020, 1, 1));

        gridLayout->addWidget(expday, 8, 0, 1, 1);

        mm = new QLineEdit(Eisagogi);
        mm->setObjectName(QString::fromUtf8("mm"));

        gridLayout->addWidget(mm, 6, 0, 1, 1);

        posotita = new QSpinBox(Eisagogi);
        posotita->setObjectName(QString::fromUtf8("posotita"));
        posotita->setMinimum(1);
        posotita->setMaximum(1000);

        gridLayout->addWidget(posotita, 12, 0, 1, 1, Qt::AlignTop);

        poso_label = new QLabel(Eisagogi);
        poso_label->setObjectName(QString::fromUtf8("poso_label"));

        gridLayout->addWidget(poso_label, 11, 0, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        category_cb = new QComboBox(Eisagogi);
        category_cb->setObjectName(QString::fromUtf8("category_cb"));

        gridLayout->addWidget(category_cb, 3, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        message = new QLabel(Eisagogi);
        message->setObjectName(QString::fromUtf8("message"));

        gridLayout_2->addWidget(message, 2, 0, 1, 1);

        QWidget::setTabOrder(barcode, katigoria);
        QWidget::setTabOrder(katigoria, onoma);
        QWidget::setTabOrder(onoma, mm);
        QWidget::setTabOrder(mm, expday);
        QWidget::setTabOrder(expday, posotita);
        QWidget::setTabOrder(posotita, new_med);
        QWidget::setTabOrder(new_med, katahorisi);

        retranslateUi(Eisagogi);

        QMetaObject::connectSlotsByName(Eisagogi);
    } // setupUi

    void retranslateUi(QDialog *Eisagogi)
    {
        Eisagogi->setWindowTitle(QApplication::translate("Eisagogi", "\316\225\316\231\316\243\316\221\316\223\316\251\316\223\316\227", nullptr));
        new_med->setText(QApplication::translate("Eisagogi", "\316\235\316\255\316\277 *", nullptr));
        katahorisi->setText(QApplication::translate("Eisagogi", "\316\232\316\261\317\204\316\261\317\207\317\216\317\201\316\271\317\203\316\267", nullptr));
        onoma->setText(QString());
        onoma->setPlaceholderText(QApplication::translate("Eisagogi", "\316\214\316\275\316\277\316\274\316\261", nullptr));
        katigoria->setPlaceholderText(QApplication::translate("Eisagogi", "\316\232\316\261\317\204\316\267\316\263\316\277\317\201\316\257\316\261", nullptr));
        arithmos_label->setText(QApplication::translate("Eisagogi", "\316\221\317\201\316\271\316\270\316\274\317\214\317\202", nullptr));
        barcode->setPlaceholderText(QApplication::translate("Eisagogi", "Barcode", nullptr));
        label->setText(QApplication::translate("Eisagogi", "\316\227\316\274. \316\233\316\256\316\276\316\267\317\202", nullptr));
        mm->setPlaceholderText(QApplication::translate("Eisagogi", "\316\234\316\234", nullptr));
        poso_label->setText(QApplication::translate("Eisagogi", "\316\240\316\277\317\203\317\214\317\204\316\267\317\204\316\261", nullptr));
        message->setText(QApplication::translate("Eisagogi", "\316\243\317\205\316\274\317\200\316\273\316\267\317\201\317\216\317\203\317\204\316\265 \317\214\316\273\316\261 \317\204\316\261 \317\200\316\265\316\264\316\257\316\261 !", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eisagogi: public Ui_Eisagogi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EISAGOGI_H
