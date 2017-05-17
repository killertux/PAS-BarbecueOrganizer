/********************************************************************************
** Form generated from reading UI file 'convites.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef INVITEWINDOW_H
#define INVITEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InviteWindow
{
public:
    QAction *actionLog_out;
    QAction *actionSair;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelConvites;
    QLabel *labelConvitesEventName;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonDecline;
    QPushButton *pushButtonAccept;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InviteWindow)
    {
        if (InviteWindow->objectName().isEmpty())
            InviteWindow->setObjectName(QString::fromUtf8("InviteWindow"));
        InviteWindow->resize(636, 151);
        actionLog_out = new QAction(InviteWindow);
        actionLog_out->setObjectName(QString::fromUtf8("actionLog_out"));
        QFont font;
        font.setPointSize(16);
        actionLog_out->setFont(font);
        actionSair = new QAction(InviteWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionSair->setFont(font);
        centralwidget = new QWidget(InviteWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(19, 9, 601, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelConvites = new QLabel(verticalLayoutWidget);
        labelConvites->setObjectName(QString::fromUtf8("labelConvites"));
        QFont font1;
        font1.setPointSize(14);
        labelConvites->setFont(font1);

        horizontalLayout->addWidget(labelConvites);

        labelConvitesEventName = new QLabel(verticalLayoutWidget);
        labelConvitesEventName->setObjectName(QString::fromUtf8("labelConvitesEventName"));
        labelConvitesEventName->setFont(font1);

        horizontalLayout->addWidget(labelConvitesEventName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonDecline = new QPushButton(verticalLayoutWidget);
        pushButtonDecline->setObjectName(QString::fromUtf8("pushButtonDecline"));
        pushButtonDecline->setFont(font1);

        horizontalLayout_2->addWidget(pushButtonDecline);

        pushButtonAccept = new QPushButton(verticalLayoutWidget);
        pushButtonAccept->setObjectName(QString::fromUtf8("pushButtonAccept"));
        pushButtonAccept->setFont(font1);

        horizontalLayout_2->addWidget(pushButtonAccept);


        verticalLayout->addLayout(horizontalLayout_2);

        InviteWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(InviteWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        InviteWindow->setStatusBar(statusbar);

        retranslateUi(InviteWindow);

        QMetaObject::connectSlotsByName(InviteWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InviteWindow)
    {
        InviteWindow->setWindowTitle(QApplication::translate("InviteWindow", "Convites", 0, QApplication::UnicodeUTF8));
        actionLog_out->setText(QApplication::translate("InviteWindow", "Log out", 0, QApplication::UnicodeUTF8));
        actionSair->setText(QApplication::translate("InviteWindow", "Sair", 0, QApplication::UnicodeUTF8));
        labelConvites->setText(QApplication::translate("InviteWindow", "Voc\303\252 foi convidado para o evento", 0, QApplication::UnicodeUTF8));
        labelConvitesEventName->setText(QApplication::translate("InviteWindow", "nome evento", 0, QApplication::UnicodeUTF8));
        pushButtonDecline->setText(QApplication::translate("InviteWindow", "Recusar", 0, QApplication::UnicodeUTF8));
        pushButtonAccept->setText(QApplication::translate("InviteWindow", "Aceitar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InviteWindow: public Ui_InviteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // INVITEWINDOW_H
