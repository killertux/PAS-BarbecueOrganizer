/********************************************************************************
** Form generated from reading UI file 'evento.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef VIEWEVENTWINDOW_H
#define VIEWEVENTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewEventWindow
{
public:
    QAction *actionLog_out;
    QAction *actionSair;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelNomeEventoMenu;
    QLabel *labelNomeEvento;
    QLabel *labelDataHoraMenu;
    QLabel *labelDataHora;
    QLabel *labelOrganizadorMenu;
    QLabel *labelOrganizador;
    QLabel *labelComidaMenu;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxComidaSim;
    QCheckBox *checkBoxComidaNao;
    QLabel *labelBebidaMenu;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxBebidaSim;
    QCheckBox *checkBoxBebidaNao;
    QLabel *labelPrecoMenu;
    QLabel *labelPreco;
    QLabel *labelLocalMenu;
    QLabel *labelLocal;
    QLabel *labelDescricao;
    QTextBrowser *textBrowserDescricao;
    QLabel *labelNaoConfirmadas;
    QListWidget *listWidgetNaoConfirmadas;
    QLabel *labelConfirmadas;
    QListWidget *listWidgetConfirmadas;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonBack;
    QPushButton *pushButtonConfirmar;
    QPushButton *pushButtonModificar;
    QMenuBar *menubar;
    QMenu *menuRol_nator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ViewEventWindow)
    {
        if (ViewEventWindow->objectName().isEmpty())
            ViewEventWindow->setObjectName(QString::fromUtf8("ViewEventWindow"));
        ViewEventWindow->resize(608, 657);
        QFont font;
        font.setPointSize(16);
        ViewEventWindow->setFont(font);
        actionLog_out = new QAction(ViewEventWindow);
        actionLog_out->setObjectName(QString::fromUtf8("actionLog_out"));
        QFont font1;
        font1.setPointSize(12);
        actionLog_out->setFont(font1);
        actionSair = new QAction(ViewEventWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionSair->setFont(font1);
        centralwidget = new QWidget(ViewEventWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        labelNomeEventoMenu = new QLabel(centralwidget);
        labelNomeEventoMenu->setObjectName(QString::fromUtf8("labelNomeEventoMenu"));
        QFont font2;
        font2.setPointSize(14);
        labelNomeEventoMenu->setFont(font2);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelNomeEventoMenu);

        labelNomeEvento = new QLabel(centralwidget);
        labelNomeEvento->setObjectName(QString::fromUtf8("labelNomeEvento"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelNomeEvento);

        labelDataHoraMenu = new QLabel(centralwidget);
        labelDataHoraMenu->setObjectName(QString::fromUtf8("labelDataHoraMenu"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelDataHoraMenu);

        labelDataHora = new QLabel(centralwidget);
        labelDataHora->setObjectName(QString::fromUtf8("labelDataHora"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelDataHora);

        labelOrganizadorMenu = new QLabel(centralwidget);
        labelOrganizadorMenu->setObjectName(QString::fromUtf8("labelOrganizadorMenu"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelOrganizadorMenu);

        labelOrganizador = new QLabel(centralwidget);
        labelOrganizador->setObjectName(QString::fromUtf8("labelOrganizador"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelOrganizador);

        labelComidaMenu = new QLabel(centralwidget);
        labelComidaMenu->setObjectName(QString::fromUtf8("labelComidaMenu"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelComidaMenu);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxComidaSim = new QCheckBox(centralwidget);
        checkBoxComidaSim->setObjectName(QString::fromUtf8("checkBoxComidaSim"));
        checkBoxComidaSim->setEnabled(false);

        horizontalLayout->addWidget(checkBoxComidaSim);

        checkBoxComidaNao = new QCheckBox(centralwidget);
        checkBoxComidaNao->setObjectName(QString::fromUtf8("checkBoxComidaNao"));
        checkBoxComidaNao->setEnabled(false);

        horizontalLayout->addWidget(checkBoxComidaNao);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        labelBebidaMenu = new QLabel(centralwidget);
        labelBebidaMenu->setObjectName(QString::fromUtf8("labelBebidaMenu"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelBebidaMenu);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBoxBebidaSim = new QCheckBox(centralwidget);
        checkBoxBebidaSim->setObjectName(QString::fromUtf8("checkBoxBebidaSim"));
        checkBoxBebidaSim->setEnabled(false);

        horizontalLayout_2->addWidget(checkBoxBebidaSim);

        checkBoxBebidaNao = new QCheckBox(centralwidget);
        checkBoxBebidaNao->setObjectName(QString::fromUtf8("checkBoxBebidaNao"));
        checkBoxBebidaNao->setEnabled(false);

        horizontalLayout_2->addWidget(checkBoxBebidaNao);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_2);

        labelPrecoMenu = new QLabel(centralwidget);
        labelPrecoMenu->setObjectName(QString::fromUtf8("labelPrecoMenu"));

        formLayout->setWidget(5, QFormLayout::LabelRole, labelPrecoMenu);

        labelPreco = new QLabel(centralwidget);
        labelPreco->setObjectName(QString::fromUtf8("labelPreco"));

        formLayout->setWidget(5, QFormLayout::FieldRole, labelPreco);

        labelLocalMenu = new QLabel(centralwidget);
        labelLocalMenu->setObjectName(QString::fromUtf8("labelLocalMenu"));

        formLayout->setWidget(6, QFormLayout::LabelRole, labelLocalMenu);

        labelLocal = new QLabel(centralwidget);
        labelLocal->setObjectName(QString::fromUtf8("labelLocal"));

        formLayout->setWidget(6, QFormLayout::FieldRole, labelLocal);

        labelDescricao = new QLabel(centralwidget);
        labelDescricao->setObjectName(QString::fromUtf8("labelDescricao"));

        formLayout->setWidget(7, QFormLayout::LabelRole, labelDescricao);

        textBrowserDescricao = new QTextBrowser(centralwidget);
        textBrowserDescricao->setObjectName(QString::fromUtf8("textBrowserDescricao"));
        textBrowserDescricao->setEnabled(false);

        formLayout->setWidget(7, QFormLayout::FieldRole, textBrowserDescricao);

        labelNaoConfirmadas = new QLabel(centralwidget);
        labelNaoConfirmadas->setObjectName(QString::fromUtf8("labelNaoConfirmadas"));

        formLayout->setWidget(8, QFormLayout::LabelRole, labelNaoConfirmadas);

        listWidgetNaoConfirmadas = new QListWidget(centralwidget);
        listWidgetNaoConfirmadas->setObjectName(QString::fromUtf8("listWidgetNaoConfirmadas"));
        listWidgetNaoConfirmadas->setEnabled(false);

        formLayout->setWidget(8, QFormLayout::FieldRole, listWidgetNaoConfirmadas);

        labelConfirmadas = new QLabel(centralwidget);
        labelConfirmadas->setObjectName(QString::fromUtf8("labelConfirmadas"));

        formLayout->setWidget(9, QFormLayout::LabelRole, labelConfirmadas);

        listWidgetConfirmadas = new QListWidget(centralwidget);
        listWidgetConfirmadas->setObjectName(QString::fromUtf8("listWidgetConfirmadas"));
        listWidgetConfirmadas->setEnabled(false);

        formLayout->setWidget(9, QFormLayout::FieldRole, listWidgetConfirmadas);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButtonBack = new QPushButton(centralwidget);
        pushButtonBack->setObjectName(QString::fromUtf8("pushButtonBack"));

        horizontalLayout_3->addWidget(pushButtonBack);

        pushButtonConfirmar = new QPushButton(centralwidget);
        pushButtonConfirmar->setObjectName(QString::fromUtf8("pushButtonConfirmar"));

        horizontalLayout_3->addWidget(pushButtonConfirmar);

        pushButtonModificar = new QPushButton(centralwidget);
        pushButtonModificar->setObjectName(QString::fromUtf8("pushButtonModificar"));

        horizontalLayout_3->addWidget(pushButtonModificar);


        verticalLayout->addLayout(horizontalLayout_3);

        ViewEventWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ViewEventWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 608, 29));
        menubar->setFont(font);
        menuRol_nator = new QMenu(menubar);
        menuRol_nator->setObjectName(QString::fromUtf8("menuRol_nator"));
        ViewEventWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ViewEventWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ViewEventWindow->setStatusBar(statusbar);

        menubar->addAction(menuRol_nator->menuAction());
        menuRol_nator->addAction(actionLog_out);
        menuRol_nator->addAction(actionSair);

        retranslateUi(ViewEventWindow);

        QMetaObject::connectSlotsByName(ViewEventWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ViewEventWindow)
    {
        ViewEventWindow->setWindowTitle(QApplication::translate("ViewEventWindow", "Evento", 0, QApplication::UnicodeUTF8));
        actionLog_out->setText(QApplication::translate("ViewEventWindow", "Log out", 0, QApplication::UnicodeUTF8));
        actionSair->setText(QApplication::translate("ViewEventWindow", "Sair", 0, QApplication::UnicodeUTF8));
        labelNomeEventoMenu->setText(QApplication::translate("ViewEventWindow", "Nome do Evento", 0, QApplication::UnicodeUTF8));
        labelNomeEvento->setText(QApplication::translate("ViewEventWindow", "Evento", 0, QApplication::UnicodeUTF8));
        labelDataHoraMenu->setText(QApplication::translate("ViewEventWindow", "Data e Hora", 0, QApplication::UnicodeUTF8));
        labelDataHora->setText(QApplication::translate("ViewEventWindow", "evento data e hora", 0, QApplication::UnicodeUTF8));
        labelOrganizadorMenu->setText(QApplication::translate("ViewEventWindow", "Organizador", 0, QApplication::UnicodeUTF8));
        labelOrganizador->setText(QApplication::translate("ViewEventWindow", "Nome Organizador", 0, QApplication::UnicodeUTF8));
        labelComidaMenu->setText(QApplication::translate("ViewEventWindow", "Haver\303\241 comida:", 0, QApplication::UnicodeUTF8));
        checkBoxComidaSim->setText(QApplication::translate("ViewEventWindow", "Sim", 0, QApplication::UnicodeUTF8));
        checkBoxComidaNao->setText(QApplication::translate("ViewEventWindow", "N\303\243o", 0, QApplication::UnicodeUTF8));
        labelBebidaMenu->setText(QApplication::translate("ViewEventWindow", "Haver\303\241 bebida:", 0, QApplication::UnicodeUTF8));
        checkBoxBebidaSim->setText(QApplication::translate("ViewEventWindow", "Sim", 0, QApplication::UnicodeUTF8));
        checkBoxBebidaNao->setText(QApplication::translate("ViewEventWindow", "N\303\243o", 0, QApplication::UnicodeUTF8));
        labelPrecoMenu->setText(QApplication::translate("ViewEventWindow", "Pre\303\247o", 0, QApplication::UnicodeUTF8));
        labelPreco->setText(QApplication::translate("ViewEventWindow", "20.00", 0, QApplication::UnicodeUTF8));
        labelLocalMenu->setText(QApplication::translate("ViewEventWindow", "Local", 0, QApplication::UnicodeUTF8));
        labelLocal->setText(QApplication::translate("ViewEventWindow", "Local do Evento", 0, QApplication::UnicodeUTF8));
        labelDescricao->setText(QApplication::translate("ViewEventWindow", "Descri\303\247\303\243o", 0, QApplication::UnicodeUTF8));
        labelNaoConfirmadas->setText(QApplication::translate("ViewEventWindow", "N\303\243o Confirmadas", 0, QApplication::UnicodeUTF8));
        labelConfirmadas->setText(QApplication::translate("ViewEventWindow", "Confirmadas", 0, QApplication::UnicodeUTF8));
        pushButtonBack->setText(QApplication::translate("ViewEventWindow", "Voltar", 0, QApplication::UnicodeUTF8));
        pushButtonConfirmar->setText(QApplication::translate("ViewEventWindow", "Confirmar Presen\303\247a", 0, QApplication::UnicodeUTF8));
        pushButtonModificar->setText(QApplication::translate("ViewEventWindow", "Modificar Evento", 0, QApplication::UnicodeUTF8));
        menuRol_nator->setTitle(QApplication::translate("ViewEventWindow", "Rol\303\252nator", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ViewEventWindow: public Ui_ViewEventWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VIEWEVENTWINDOW_H
