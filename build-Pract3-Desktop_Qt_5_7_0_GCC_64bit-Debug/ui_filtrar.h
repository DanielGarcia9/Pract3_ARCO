/********************************************************************************
** Form generated from reading UI file 'filtrar.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTRAR_H
#define UI_FILTRAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_filtrar
{
public:
    QWidget *centralwidget;
    QLabel *label_7;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QTextBrowser *textBrowser_2;
    QLabel *label_4;
    QTextBrowser *textBrowser_3;
    QLabel *label_5;
    QTextBrowser *textBrowser_4;
    QLabel *label_6;
    QTextBrowser *textBrowser_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QLabel *label;
    QTextBrowser *textBrowser_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QMainWindow *filtrar)
    {
        if (filtrar->objectName().isEmpty())
            filtrar->setObjectName(QStringLiteral("filtrar"));
        filtrar->resize(800, 600);
        centralwidget = new QWidget(filtrar);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(280, 110, 181, 361));
        QFont font;
        font.setPointSize(250);
        label_7->setFont(font);
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 120, 261, 399));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        textBrowser = new QTextBrowser(formLayoutWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::FieldRole, textBrowser);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        textBrowser_2 = new QTextBrowser(formLayoutWidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        sizePolicy.setHeightForWidth(textBrowser_2->sizePolicy().hasHeightForWidth());
        textBrowser_2->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, textBrowser_2);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        textBrowser_3 = new QTextBrowser(formLayoutWidget);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, textBrowser_3);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        textBrowser_4 = new QTextBrowser(formLayoutWidget);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));

        formLayout->setWidget(3, QFormLayout::FieldRole, textBrowser_4);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        textBrowser_5 = new QTextBrowser(formLayoutWidget);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));

        formLayout->setWidget(4, QFormLayout::FieldRole, textBrowser_5);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(610, 520, 171, 51));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 562, 131, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 520, 211, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 20, 641, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("FreeMono"));
        font1.setPointSize(20);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        textBrowser_6 = new QTextBrowser(centralwidget);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(580, 290, 151, 41));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(510, 290, 81, 41));
        QFont font2;
        font2.setPointSize(14);
        label_8->setFont(font2);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 100, 67, 17));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(740, 310, 67, 17));
        filtrar->setCentralWidget(centralwidget);

        retranslateUi(filtrar);

        QMetaObject::connectSlotsByName(filtrar);
    } // setupUi

    void retranslateUi(QMainWindow *filtrar)
    {
        filtrar->setWindowTitle(QApplication::translate("filtrar", "MainWindow", 0));
        label_7->setText(QApplication::translate("filtrar", "}", 0));
        label_2->setText(QApplication::translate("filtrar", "TIEMPO 1", 0));
        label_3->setText(QApplication::translate("filtrar", "TIEMPO 2", 0));
        label_4->setText(QApplication::translate("filtrar", "TIEMPO 3", 0));
        label_5->setText(QApplication::translate("filtrar", "TIEMPO 4", 0));
        label_6->setText(QApplication::translate("filtrar", "TIEMPO 5", 0));
        pushButton_2->setText(QApplication::translate("filtrar", "EJECUTAR", 0));
        pushButton_3->setText(QApplication::translate("filtrar", "RESETEAR", 0));
        pushButton->setText(QApplication::translate("filtrar", "SELECCIONAR ARCHIVO", 0));
        label->setText(QApplication::translate("filtrar", "ALGORITMO FILTRO COLOR AZUL", 0));
        label_8->setText(QApplication::translate("filtrar", "MEDIA:", 0));
        label_9->setText(QApplication::translate("filtrar", "(ms)", 0));
        label_10->setText(QApplication::translate("filtrar", "(ms)", 0));
    } // retranslateUi

};

namespace Ui {
    class filtrar: public Ui_filtrar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTRAR_H
