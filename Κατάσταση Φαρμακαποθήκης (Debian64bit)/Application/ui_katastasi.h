/********************************************************************************
** Form generated from reading UI file 'katastasi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KATASTASI_H
#define UI_KATASTASI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Katastasi
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QLabel *ok;
    QPushButton *pushButton;
    QPushButton *printer;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
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
    QGridLayout *gridLayout_2;
    QPushButton *search;
    QLineEdit *s_line;
    QComboBox *categories;

    void setupUi(QDialog *Katastasi)
    {
        if (Katastasi->objectName().isEmpty())
            Katastasi->setObjectName(QString::fromUtf8("Katastasi"));
        Katastasi->resize(750, 370);
        Katastasi->setStyleSheet(QString::fromUtf8("*{\n"
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
        gridLayout = new QGridLayout(Katastasi);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        ok = new QLabel(Katastasi);
        ok->setObjectName(QString::fromUtf8("ok"));

        horizontalLayout_6->addWidget(ok);

        pushButton = new QPushButton(Katastasi);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(75, 22));

        horizontalLayout_6->addWidget(pushButton);

        printer = new QPushButton(Katastasi);
        printer->setObjectName(QString::fromUtf8("printer"));
        printer->setMinimumSize(QSize(75, 22));

        horizontalLayout_6->addWidget(printer);


        gridLayout->addLayout(horizontalLayout_6, 4, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(Katastasi);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 728, 288));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
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

        onoma_l = new QLabel(scrollAreaWidgetContents);
        onoma_l->setObjectName(QString::fromUtf8("onoma_l"));

        gridLayout_3->addWidget(onoma_l, 0, 0, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        mm_l = new QLabel(scrollAreaWidgetContents);
        mm_l->setObjectName(QString::fromUtf8("mm_l"));

        gridLayout_3->addWidget(mm_l, 0, 1, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        poso_l = new QLabel(scrollAreaWidgetContents);
        poso_l->setObjectName(QString::fromUtf8("poso_l"));

        gridLayout_3->addWidget(poso_l, 0, 2, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        arithomos_l = new QLabel(scrollAreaWidgetContents);
        arithomos_l->setObjectName(QString::fromUtf8("arithomos_l"));

        gridLayout_3->addWidget(arithomos_l, 0, 3, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        exp_l = new QLabel(scrollAreaWidgetContents);
        exp_l->setObjectName(QString::fromUtf8("exp_l"));

        gridLayout_3->addWidget(exp_l, 0, 4, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        gridLayout->addLayout(verticalLayout_2, 3, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        search = new QPushButton(Katastasi);
        search->setObjectName(QString::fromUtf8("search"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(search->sizePolicy().hasHeightForWidth());
        search->setSizePolicy(sizePolicy);
        search->setMinimumSize(QSize(75, 22));

        gridLayout_2->addWidget(search, 0, 2, 1, 1);

        s_line = new QLineEdit(Katastasi);
        s_line->setObjectName(QString::fromUtf8("s_line"));
        sizePolicy.setHeightForWidth(s_line->sizePolicy().hasHeightForWidth());
        s_line->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(s_line, 0, 1, 1, 1);

        categories = new QComboBox(Katastasi);
        categories->setObjectName(QString::fromUtf8("categories"));

        gridLayout_2->addWidget(categories, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        QWidget::setTabOrder(categories, s_line);
        QWidget::setTabOrder(s_line, search);
        QWidget::setTabOrder(search, scrollArea);
        QWidget::setTabOrder(scrollArea, printer);

        retranslateUi(Katastasi);

        QMetaObject::connectSlotsByName(Katastasi);
    } // setupUi

    void retranslateUi(QDialog *Katastasi)
    {
        Katastasi->setWindowTitle(QApplication::translate("Katastasi", "\316\232\316\221\316\244\316\221\316\243\316\244\316\221\316\243\316\227", nullptr));
        ok->setText(QApplication::translate("Katastasi", "\316\221\317\200\316\277\316\270\316\267\316\272\316\265\317\215\317\204\316\267\316\272\316\265 !", nullptr));
        pushButton->setText(QApplication::translate("Katastasi", "\316\221\317\200\316\277\316\270\316\256\316\272\316\265\317\205\317\203\316\267", nullptr));
        printer->setText(QApplication::translate("Katastasi", "\316\225\316\272\317\204\317\215\317\200\317\211\317\203\316\267", nullptr));
        onoma_l->setText(QApplication::translate("Katastasi", "\316\237\316\235\316\237\316\234\316\221", nullptr));
        mm_l->setText(QApplication::translate("Katastasi", "\316\234\316\234", nullptr));
        poso_l->setText(QApplication::translate("Katastasi", "\316\240\316\237\316\243\316\237\316\244\316\227\316\244\316\221", nullptr));
        arithomos_l->setText(QApplication::translate("Katastasi", "\316\221\316\241\316\231\316\230\316\234\316\237\316\243", nullptr));
        exp_l->setText(QApplication::translate("Katastasi", "\316\227\316\234. \316\233\316\227\316\236\316\227\316\243", nullptr));
        search->setText(QApplication::translate("Katastasi", "\316\221\316\275\316\261\316\266\316\256\317\204\316\267\317\203\316\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Katastasi: public Ui_Katastasi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KATASTASI_H
