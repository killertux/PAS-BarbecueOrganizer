/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QAction *actionSair;
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QLabel *labelLogin;
    QLineEdit *lineEditLogin;
    QLabel *labelSenha;
    QLineEdit *lineEditPassword;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonRegister;
    QPushButton *pushButtonLogin;
    QMenuBar *menubar;
    QMenu *menuSair;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(270, 291);
        actionSair = new QAction(LoginWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        QFont font;
        font.setPointSize(16);
        actionSair->setFont(font);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        labelLogin = new QLabel(centralwidget);
        labelLogin->setObjectName(QString::fromUtf8("labelLogin"));
        QFont font1;
        font1.setPointSize(14);
        labelLogin->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelLogin);

        lineEditLogin = new QLineEdit(centralwidget);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));
        QFont font2;
        font2.setPointSize(12);
        lineEditLogin->setFont(font2);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditLogin);

        labelSenha = new QLabel(centralwidget);
        labelSenha->setObjectName(QString::fromUtf8("labelSenha"));
        labelSenha->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, labelSenha);

        lineEditPassword = new QLineEdit(centralwidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setFont(font2);
        lineEditPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditPassword);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonRegister = new QPushButton(centralwidget);
        pushButtonRegister->setObjectName(QString::fromUtf8("pushButtonRegister"));
        pushButtonRegister->setFont(font1);

        horizontalLayout->addWidget(pushButtonRegister);

        pushButtonLogin = new QPushButton(centralwidget);
        pushButtonLogin->setObjectName(QString::fromUtf8("pushButtonLogin"));
        pushButtonLogin->setFont(font1);

        horizontalLayout->addWidget(pushButtonLogin);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 270, 29));
        menubar->setFont(font);
        menuSair = new QMenu(menubar);
        menuSair->setObjectName(QString::fromUtf8("menuSair"));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LoginWindow->setStatusBar(statusbar);

        menubar->addAction(menuSair->menuAction());
        menuSair->addAction(actionSair);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Rol\303\252nator", 0, QApplication::UnicodeUTF8));
        actionSair->setText(QApplication::translate("LoginWindow", "Sair", 0, QApplication::UnicodeUTF8));
        labelLogin->setText(QApplication::translate("LoginWindow", "Login:", 0, QApplication::UnicodeUTF8));
        labelSenha->setText(QApplication::translate("LoginWindow", "Senha:", 0, QApplication::UnicodeUTF8));
        lineEditPassword->setInputMask(QString());
        pushButtonRegister->setText(QApplication::translate("LoginWindow", "Registrar", 0, QApplication::UnicodeUTF8));
        pushButtonLogin->setText(QApplication::translate("LoginWindow", "Login", 0, QApplication::UnicodeUTF8));
        menuSair->setTitle(QApplication::translate("LoginWindow", "Rol\303\252nator", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LOGINWINDOW_H
