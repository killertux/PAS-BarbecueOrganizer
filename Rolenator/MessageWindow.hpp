/********************************************************************************
** Form generated from reading UI file 'mensagens.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MESSAGEWINDOW_H
#define MESSAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageWindow
{
public:
    QAction *actionLog_Out;
    QAction *actionSair;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelConversaMenu;
    QLabel *labelConversaUser;
    QTextBrowser *textBrowserConversaLog;
    QLineEdit *lineEditMensagem;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonVoltar;
    QPushButton *pushButtonEnviar;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QMenu *menuRol_nator;

    void setupUi(QMainWindow *MessageWindow)
    {
        if (MessageWindow->objectName().isEmpty())
            MessageWindow->setObjectName(QString::fromUtf8("MessageWindow"));
        MessageWindow->resize(705, 580);
        QFont font;
        font.setPointSize(16);
        MessageWindow->setFont(font);
        actionLog_Out = new QAction(MessageWindow);
        actionLog_Out->setObjectName(QString::fromUtf8("actionLog_Out"));
        actionSair = new QAction(MessageWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        centralwidget = new QWidget(MessageWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelConversaMenu = new QLabel(centralwidget);
        labelConversaMenu->setObjectName(QString::fromUtf8("labelConversaMenu"));
        labelConversaMenu->setLayoutDirection(Qt::LeftToRight);
        labelConversaMenu->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelConversaMenu);

        labelConversaUser = new QLabel(centralwidget);
        labelConversaUser->setObjectName(QString::fromUtf8("labelConversaUser"));

        horizontalLayout->addWidget(labelConversaUser);


        verticalLayout->addLayout(horizontalLayout);

        textBrowserConversaLog = new QTextBrowser(centralwidget);
        textBrowserConversaLog->setObjectName(QString::fromUtf8("textBrowserConversaLog"));
        textBrowserConversaLog->setEnabled(false);
        QFont font1;
        font1.setPointSize(14);
        textBrowserConversaLog->setFont(font1);

        verticalLayout->addWidget(textBrowserConversaLog);

        lineEditMensagem = new QLineEdit(centralwidget);
        lineEditMensagem->setObjectName(QString::fromUtf8("lineEditMensagem"));
        lineEditMensagem->setFont(font1);
        lineEditMensagem->setAutoFillBackground(true);

        verticalLayout->addWidget(lineEditMensagem);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonVoltar = new QPushButton(centralwidget);
        pushButtonVoltar->setObjectName(QString::fromUtf8("pushButtonVoltar"));

        horizontalLayout_2->addWidget(pushButtonVoltar);

        pushButtonEnviar = new QPushButton(centralwidget);
        pushButtonEnviar->setObjectName(QString::fromUtf8("pushButtonEnviar"));

        horizontalLayout_2->addWidget(pushButtonEnviar);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);

        MessageWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MessageWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MessageWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MessageWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 705, 29));
        menuRol_nator = new QMenu(menuBar);
        menuRol_nator->setObjectName(QString::fromUtf8("menuRol_nator"));
        MessageWindow->setMenuBar(menuBar);

        menuBar->addAction(menuRol_nator->menuAction());
        menuRol_nator->addAction(actionLog_Out);
        menuRol_nator->addAction(actionSair);

        retranslateUi(MessageWindow);

        QMetaObject::connectSlotsByName(MessageWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MessageWindow)
    {
        MessageWindow->setWindowTitle(QApplication::translate("MessageWindow", "Mensagens", 0, QApplication::UnicodeUTF8));
        actionLog_Out->setText(QApplication::translate("MessageWindow", "Log Out", 0, QApplication::UnicodeUTF8));
        actionSair->setText(QApplication::translate("MessageWindow", "Sair", 0, QApplication::UnicodeUTF8));
        labelConversaMenu->setText(QApplication::translate("MessageWindow", "Conversa com ", 0, QApplication::UnicodeUTF8));
        labelConversaUser->setText(QApplication::translate("MessageWindow", "amiguinho", 0, QApplication::UnicodeUTF8));
        pushButtonVoltar->setText(QApplication::translate("MessageWindow", "Voltar", 0, QApplication::UnicodeUTF8));
        pushButtonEnviar->setText(QApplication::translate("MessageWindow", "Enviar", 0, QApplication::UnicodeUTF8));
        menuRol_nator->setTitle(QApplication::translate("MessageWindow", "Rol\303\252nator", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MessageWindow: public Ui_MessageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MESSAGEWINDOW_H
