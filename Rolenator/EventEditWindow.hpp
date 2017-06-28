/********************************************************************************
** Form generated from reading UI file 'gerenciar_eventos.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef GERENCIAR_EVENTOS_H
#define GERENCIAR_EVENTOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

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
    QDoubleSpinBox *doubleSpinBoxPreco;
    QLabel *labelLocal;
    QLineEdit *lineEditLocal;
    QLabel *labelDescricao;
    QTextEdit *textEditDescricao;
    QDateTimeEdit *dateTimeEdit;
    QLabel *labelInvite;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *listWidgetInvite;
    QPushButton *pushButtonInvte;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonBack;
    QPushButton *pushButtonSave;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuRol_nator;

    void setupUi(QMainWindow *EventEditWindow)
    {
        if (EventEditWindow->objectName().isEmpty())
            EventEditWindow->setObjectName(QString::fromUtf8("EventEditWindow"));
        EventEditWindow->setEnabled(true);
        EventEditWindow->resize(682, 488);
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
        checkBoxComidaNao->setEnabled(true);
        checkBoxComidaNao->setFont(font2);
        checkBoxComidaNao->setCheckable(true);

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

        doubleSpinBoxPreco = new QDoubleSpinBox(centralwidget);
        doubleSpinBoxPreco->setObjectName(QString::fromUtf8("doubleSpinBoxPreco"));
        doubleSpinBoxPreco->setFont(font3);
        doubleSpinBoxPreco->setAutoFillBackground(true);
        doubleSpinBoxPreco->setReadOnly(false);
        doubleSpinBoxPreco->setValue(0);

        formLayout->setWidget(4, QFormLayout::FieldRole, doubleSpinBoxPreco);

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

        dateTimeEdit = new QDateTimeEdit(centralwidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setFont(font3);

        formLayout->setWidget(1, QFormLayout::FieldRole, dateTimeEdit);

        labelInvite = new QLabel(centralwidget);
        labelInvite->setObjectName(QString::fromUtf8("labelInvite"));

        formLayout->setWidget(7, QFormLayout::LabelRole, labelInvite);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        listWidgetInvite = new QListWidget(centralwidget);
        listWidgetInvite->setObjectName(QString::fromUtf8("listWidgetInvite"));

        horizontalLayout_4->addWidget(listWidgetInvite);

        pushButtonInvte = new QPushButton(centralwidget);
        pushButtonInvte->setObjectName(QString::fromUtf8("pushButtonInvte"));

        horizontalLayout_4->addWidget(pushButtonInvte);


        formLayout->setLayout(7, QFormLayout::FieldRole, horizontalLayout_4);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButtonBack = new QPushButton(centralwidget);
        pushButtonBack->setObjectName(QString::fromUtf8("pushButtonBack"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonBack->sizePolicy().hasHeightForWidth());
        pushButtonBack->setSizePolicy(sizePolicy);
        pushButtonBack->setFont(font2);

        horizontalLayout_3->addWidget(pushButtonBack);

        pushButtonSave = new QPushButton(centralwidget);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setFont(font2);

        horizontalLayout_3->addWidget(pushButtonSave);


        verticalLayout->addLayout(horizontalLayout_3);

        EventEditWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(EventEditWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        EventEditWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(EventEditWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 682, 29));
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
        doubleSpinBoxPreco->setSuffix(QString());
        labelLocal->setText(QApplication::translate("EventEditWindow", "Local", 0, QApplication::UnicodeUTF8));
        labelDescricao->setText(QApplication::translate("EventEditWindow", "Descri\303\247\303\243o", 0, QApplication::UnicodeUTF8));
        labelInvite->setText(QApplication::translate("EventEditWindow", "Usu\303\241rios", 0, QApplication::UnicodeUTF8));
        pushButtonInvte->setText(QApplication::translate("EventEditWindow", "Convidar", 0, QApplication::UnicodeUTF8));
        pushButtonBack->setText(QApplication::translate("EventEditWindow", "Voltar", 0, QApplication::UnicodeUTF8));
        pushButtonSave->setText(QApplication::translate("EventEditWindow", "Gravar", 0, QApplication::UnicodeUTF8));
        menuRol_nator->setTitle(QApplication::translate("EventEditWindow", "Rol\303\252nator", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EventEditWindow: public Ui_EventEditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GERENCIAR_EVENTOS_H
