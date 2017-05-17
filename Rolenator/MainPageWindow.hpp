/********************************************************************************
** Form generated from reading UI file 'pg_principal.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINPAGEWINDOW_H
#define MAINPAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPageWindow
{
public:
    QAction *actionLog_out;
    QAction *actionSair;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelConvitesMenu;
    QLabel *labelConvitesNum;
    QPushButton *pushButtonVisConvites;
    QLabel *labelEventosMenu;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxEventos;
    QPushButton *pushButtonVisEventos;
    QLabel *labelAmigos;
    QListWidget *listWidgetAmigos;
    QPushButton *pushButtonMessage;
    QPushButton *pushButtonCriarEvento;
    QMenuBar *menubar;
    QMenu *menuRol_nator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainPageWindow)
    {
        if (MainPageWindow->objectName().isEmpty())
            MainPageWindow->setObjectName(QString::fromUtf8("MainPageWindow"));
        MainPageWindow->resize(688, 545);
        QFont font;
        font.setPointSize(16);
        MainPageWindow->setFont(font);
        actionLog_out = new QAction(MainPageWindow);
        actionLog_out->setObjectName(QString::fromUtf8("actionLog_out"));
        QFont font1;
        font1.setPointSize(14);
        actionLog_out->setFont(font1);
        actionSair = new QAction(MainPageWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionSair->setFont(font1);
        centralwidget = new QWidget(MainPageWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelConvitesMenu = new QLabel(centralwidget);
        labelConvitesMenu->setObjectName(QString::fromUtf8("labelConvitesMenu"));

        horizontalLayout->addWidget(labelConvitesMenu);

        labelConvitesNum = new QLabel(centralwidget);
        labelConvitesNum->setObjectName(QString::fromUtf8("labelConvitesNum"));

        horizontalLayout->addWidget(labelConvitesNum);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout);

        pushButtonVisConvites = new QPushButton(centralwidget);
        pushButtonVisConvites->setObjectName(QString::fromUtf8("pushButtonVisConvites"));

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButtonVisConvites);

        labelEventosMenu = new QLabel(centralwidget);
        labelEventosMenu->setObjectName(QString::fromUtf8("labelEventosMenu"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelEventosMenu);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBoxEventos = new QComboBox(centralwidget);
        comboBoxEventos->setObjectName(QString::fromUtf8("comboBoxEventos"));

        horizontalLayout_2->addWidget(comboBoxEventos);

        pushButtonVisEventos = new QPushButton(centralwidget);
        pushButtonVisEventos->setObjectName(QString::fromUtf8("pushButtonVisEventos"));

        horizontalLayout_2->addWidget(pushButtonVisEventos);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);

        labelAmigos = new QLabel(centralwidget);
        labelAmigos->setObjectName(QString::fromUtf8("labelAmigos"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelAmigos);

        listWidgetAmigos = new QListWidget(centralwidget);
        listWidgetAmigos->setObjectName(QString::fromUtf8("listWidgetAmigos"));

        formLayout->setWidget(2, QFormLayout::FieldRole, listWidgetAmigos);

        pushButtonMessage = new QPushButton(centralwidget);
        pushButtonMessage->setObjectName(QString::fromUtf8("pushButtonMessage"));

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButtonMessage);


        verticalLayout->addLayout(formLayout);

        pushButtonCriarEvento = new QPushButton(centralwidget);
        pushButtonCriarEvento->setObjectName(QString::fromUtf8("pushButtonCriarEvento"));

        verticalLayout->addWidget(pushButtonCriarEvento);

        MainPageWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainPageWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 688, 29));
        menuRol_nator = new QMenu(menubar);
        menuRol_nator->setObjectName(QString::fromUtf8("menuRol_nator"));
        MainPageWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainPageWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainPageWindow->setStatusBar(statusbar);

        menubar->addAction(menuRol_nator->menuAction());
        menuRol_nator->addAction(actionLog_out);
        menuRol_nator->addAction(actionSair);

        retranslateUi(MainPageWindow);

        QMetaObject::connectSlotsByName(MainPageWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainPageWindow)
    {
        MainPageWindow->setWindowTitle(QApplication::translate("MainPageWindow", "P\303\241gina Principal", 0, QApplication::UnicodeUTF8));
        actionLog_out->setText(QApplication::translate("MainPageWindow", "Log out", 0, QApplication::UnicodeUTF8));
        actionSair->setText(QApplication::translate("MainPageWindow", "Sair", 0, QApplication::UnicodeUTF8));
        labelConvitesMenu->setText(QApplication::translate("MainPageWindow", "Convites:", 0, QApplication::UnicodeUTF8));
        labelConvitesNum->setText(QApplication::translate("MainPageWindow", "num", 0, QApplication::UnicodeUTF8));
        pushButtonVisConvites->setText(QApplication::translate("MainPageWindow", "Vizualizar convites", 0, QApplication::UnicodeUTF8));
        labelEventosMenu->setText(QApplication::translate("MainPageWindow", "Eventos:", 0, QApplication::UnicodeUTF8));
        pushButtonVisEventos->setText(QApplication::translate("MainPageWindow", "Visualizar Evento", 0, QApplication::UnicodeUTF8));
        labelAmigos->setText(QApplication::translate("MainPageWindow", "Usu\303\241rios", 0, QApplication::UnicodeUTF8));
        pushButtonMessage->setText(QApplication::translate("MainPageWindow", "Mensagem", 0, QApplication::UnicodeUTF8));
        pushButtonCriarEvento->setText(QApplication::translate("MainPageWindow", "Criar Evento", 0, QApplication::UnicodeUTF8));
        menuRol_nator->setTitle(QApplication::translate("MainPageWindow", "Rol\303\252nator", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainPageWindow: public Ui_MainPageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINPAGEWINDOW_H
