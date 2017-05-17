/********************************************************************************
** Form generated from reading UI file 'gerenciar_eventos.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef EDITEVENTWINDOW_H
#define EDITEVENTWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kdatetimewidget.h"

QT_BEGIN_NAMESPACE

class Ui_EventEditWindow
{
public:
    QAction *actionSair;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *labelNomeEvento;
    QLineEdit *lineEditNomeEvento;
    QLabel *labelDataHora;
    QLabel *labelComida;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxComidaSim;
    QCheckBox *checkBoxComidaNao;
    QLabel *labelBebida;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxBebidaSim;
    QCheckBox *checkBoxBebidaNao;
    QLabel *labelPreco;
    KDateTimeWidget *widgetDataHora;
    QLabel *labelLocal;
    QLineEdit *lineEditLocal;
    QLabel *labelDescricao;
    QTextEdit *textEditDescricao;
    QDoubleSpinBox *doubleSpinBoxPreco;
    QDialogButtonBox *buttonBoxEventos;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuRol_nator;

    void setupUi(QMainWindow *EventEditWindow)
    {
        if (EventEditWindow->objectName().isEmpty())
            EventEditWindow->setObjectName(QString::fromUtf8("EventEditWindow"));
        EventEditWindow->setEnabled(true);
        EventEditWindow->resize(656, 544);
        QFont font;
        font.setPointSize(16);
        font.setKerning(true);
        EventEditWindow->setFont(font);
        EventEditWindow->setMouseTracking(false);
        actionSair = new QAction(EventEditWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        QFont font1;
        font1.setPointSize(16);
        actionSair->setFont(font1);
        centralwidget = new QWidget(EventEditWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        labelNomeEvento = new QLabel(centralwidget);
        labelNomeEvento->setObjectName(QString::fromUtf8("labelNomeEvento"));
        QFont font2;
        font2.setPointSize(14);
        labelNomeEvento->setFont(font2);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelNomeEvento);

        lineEditNomeEvento = new QLineEdit(centralwidget);
        lineEditNomeEvento->setObjectName(QString::fromUtf8("lineEditNomeEvento"));
        QFont font3;
        font3.setPointSize(12);
        lineEditNomeEvento->setFont(font3);
        lineEditNomeEvento->setAutoFillBackground(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditNomeEvento);

        labelDataHora = new QLabel(centralwidget);
        labelDataHora->setObjectName(QString::fromUtf8("labelDataHora"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelDataHora);

        labelComida = new QLabel(centralwidget);
        labelComida->setObjectName(QString::fromUtf8("labelComida"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelComida);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxComidaSim = new QCheckBox(centralwidget);
        checkBoxComidaSim->setObjectName(QString::fromUtf8("checkBoxComidaSim"));
        checkBoxComidaSim->setFont(font2);

        horizontalLayout->addWidget(checkBoxComidaSim);

        checkBoxComidaNao = new QCheckBox(centralwidget);
        checkBoxComidaNao->setObjectName(QString::fromUtf8("checkBoxComidaNao"));
        checkBoxComidaNao->setFont(font2);

        horizontalLayout->addWidget(checkBoxComidaNao);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        labelBebida = new QLabel(centralwidget);
        labelBebida->setObjectName(QString::fromUtf8("labelBebida"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelBebida);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBoxBebidaSim = new QCheckBox(centralwidget);
        checkBoxBebidaSim->setObjectName(QString::fromUtf8("checkBoxBebidaSim"));
        checkBoxBebidaSim->setFont(font2);

        horizontalLayout_2->addWidget(checkBoxBebidaSim);

        checkBoxBebidaNao = new QCheckBox(centralwidget);
        checkBoxBebidaNao->setObjectName(QString::fromUtf8("checkBoxBebidaNao"));
        checkBoxBebidaNao->setFont(font2);

        horizontalLayout_2->addWidget(checkBoxBebidaNao);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_2);

        labelPreco = new QLabel(centralwidget);
        labelPreco->setObjectName(QString::fromUtf8("labelPreco"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelPreco);

        widgetDataHora = new KDateTimeWidget(centralwidget);
        widgetDataHora->setObjectName(QString::fromUtf8("widgetDataHora"));
        widgetDataHora->setFont(font2);
        widgetDataHora->setAutoFillBackground(false);
        widgetDataHora->setLocale(QLocale(QLocale::Portuguese, QLocale::Brazil));
        widgetDataHora->setInputMethodHints(Qt::ImhNone);

        formLayout->setWidget(1, QFormLayout::FieldRole, widgetDataHora);

        labelLocal = new QLabel(centralwidget);
        labelLocal->setObjectName(QString::fromUtf8("labelLocal"));

        formLayout->setWidget(5, QFormLayout::LabelRole, labelLocal);

        lineEditLocal = new QLineEdit(centralwidget);
        lineEditLocal->setObjectName(QString::fromUtf8("lineEditLocal"));
        lineEditLocal->setAutoFillBackground(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEditLocal);

        labelDescricao = new QLabel(centralwidget);
        labelDescricao->setObjectName(QString::fromUtf8("labelDescricao"));

        formLayout->setWidget(6, QFormLayout::LabelRole, labelDescricao);

        textEditDescricao = new QTextEdit(centralwidget);
        textEditDescricao->setObjectName(QString::fromUtf8("textEditDescricao"));

        formLayout->setWidget(6, QFormLayout::FieldRole, textEditDescricao);

        doubleSpinBoxPreco = new QDoubleSpinBox(centralwidget);
        doubleSpinBoxPreco->setObjectName(QString::fromUtf8("doubleSpinBoxPreco"));
        doubleSpinBoxPreco->setFont(font3);
        doubleSpinBoxPreco->setAutoFillBackground(true);
        doubleSpinBoxPreco->setReadOnly(false);
        doubleSpinBoxPreco->setValue(20);

        formLayout->setWidget(4, QFormLayout::FieldRole, doubleSpinBoxPreco);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout->addLayout(verticalLayout_2);

        buttonBoxEventos = new QDialogButtonBox(centralwidget);
        buttonBoxEventos->setObjectName(QString::fromUtf8("buttonBoxEventos"));
        buttonBoxEventos->setFont(font2);
        buttonBoxEventos->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBoxEventos->setMouseTracking(false);
        buttonBoxEventos->setFocusPolicy(Qt::TabFocus);
        buttonBoxEventos->setLocale(QLocale(QLocale::Portuguese, QLocale::Brazil));
        buttonBoxEventos->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBoxEventos->setCenterButtons(true);

        verticalLayout->addWidget(buttonBoxEventos);

        EventEditWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(EventEditWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        EventEditWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(EventEditWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 656, 29));
        menuRol_nator = new QMenu(menuBar);
        menuRol_nator->setObjectName(QString::fromUtf8("menuRol_nator"));
        EventEditWindow->setMenuBar(menuBar);

        menuBar->addAction(menuRol_nator->menuAction());
        menuRol_nator->addAction(actionSair);

        retranslateUi(EventEditWindow);

        QMetaObject::connectSlotsByName(EventEditWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EventEditWindow)
    {
        EventEditWindow->setWindowTitle(QApplication::translate("EventEditWindow", "Gerenciar Eventos", 0, QApplication::UnicodeUTF8));
        actionSair->setText(QApplication::translate("EventEditWindow", "Sair", 0, QApplication::UnicodeUTF8));
        labelNomeEvento->setText(QApplication::translate("EventEditWindow", "Nome do Evento", 0, QApplication::UnicodeUTF8));
        labelDataHora->setText(QApplication::translate("EventEditWindow", "Data e Hora", 0, QApplication::UnicodeUTF8));
        labelComida->setText(QApplication::translate("EventEditWindow", "Haver\303\241 comida:", 0, QApplication::UnicodeUTF8));
        checkBoxComidaSim->setText(QApplication::translate("EventEditWindow", "Sim", 0, QApplication::UnicodeUTF8));
        checkBoxComidaNao->setText(QApplication::translate("EventEditWindow", "N\303\243o", 0, QApplication::UnicodeUTF8));
        labelBebida->setText(QApplication::translate("EventEditWindow", "Haver\303\241 bedidas:", 0, QApplication::UnicodeUTF8));
        checkBoxBebidaSim->setText(QApplication::translate("EventEditWindow", "Sim", 0, QApplication::UnicodeUTF8));
        checkBoxBebidaNao->setText(QApplication::translate("EventEditWindow", "N\303\243o", 0, QApplication::UnicodeUTF8));
        labelPreco->setText(QApplication::translate("EventEditWindow", "Pre\303\247o", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        widgetDataHora->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        labelLocal->setText(QApplication::translate("EventEditWindow", "Local", 0, QApplication::UnicodeUTF8));
        labelDescricao->setText(QApplication::translate("EventEditWindow", "Descri\303\247\303\243o", 0, QApplication::UnicodeUTF8));
        doubleSpinBoxPreco->setSuffix(QString());
        menuRol_nator->setTitle(QApplication::translate("EventEditWindow", "Rol\303\252nator", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EventEditWindow: public Ui_EventEditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EDITEVENTWINDOW_H
