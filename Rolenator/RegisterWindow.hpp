/********************************************************************************
** Form generated from reading UI file 'Refister.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QAction *actionSair;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelRegistro;
    QFormLayout *formLayout;
    QLabel *labelLogin;
    QLineEdit *lineEditLogin;
    QLabel *labelSenha;
    QLineEdit *lineEditPassword;
    QLabel *labelConfiramrSenha;
    QLineEdit *lineEditRePassword;
    QLabel *labelNomeCompleto;
    QLineEdit *lineEditName;
    QLabel *labelEmail;
    QLineEdit *lineEditEmail;
    QPushButton *pushButtonRegister;
    QPushButton *pushButtonBack;
    QMenuBar *menubar;
    QMenu *menuRol_nator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName(QString::fromUtf8("RegisterWindow"));
        RegisterWindow->resize(399, 254);
        actionSair = new QAction(RegisterWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        QFont font;
        font.setPointSize(16);
        actionSair->setFont(font);
        centralwidget = new QWidget(RegisterWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelRegistro = new QLabel(centralwidget);
        labelRegistro->setObjectName(QString::fromUtf8("labelRegistro"));
        labelRegistro->setFont(font);
        labelRegistro->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(labelRegistro);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
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

        formLayout->setWidget(1, QFormLayout::LabelRole, labelSenha);

        lineEditPassword = new QLineEdit(centralwidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setFont(font2);
        lineEditPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPassword);

        labelConfiramrSenha = new QLabel(centralwidget);
        labelConfiramrSenha->setObjectName(QString::fromUtf8("labelConfiramrSenha"));
        labelConfiramrSenha->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, labelConfiramrSenha);

        lineEditRePassword = new QLineEdit(centralwidget);
        lineEditRePassword->setObjectName(QString::fromUtf8("lineEditRePassword"));
        lineEditRePassword->setFont(font2);
        lineEditRePassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditRePassword);

        labelNomeCompleto = new QLabel(centralwidget);
        labelNomeCompleto->setObjectName(QString::fromUtf8("labelNomeCompleto"));
        labelNomeCompleto->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, labelNomeCompleto);

        lineEditName = new QLineEdit(centralwidget);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setFont(font2);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditName);

        labelEmail = new QLabel(centralwidget);
        labelEmail->setObjectName(QString::fromUtf8("labelEmail"));
        labelEmail->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, labelEmail);

        lineEditEmail = new QLineEdit(centralwidget);
        lineEditEmail->setObjectName(QString::fromUtf8("lineEditEmail"));
        lineEditEmail->setFont(font2);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditEmail);

        pushButtonRegister = new QPushButton(centralwidget);
        pushButtonRegister->setObjectName(QString::fromUtf8("pushButtonRegister"));
        pushButtonRegister->setFont(font1);

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButtonRegister);

        pushButtonBack = new QPushButton(centralwidget);
        pushButtonBack->setObjectName(QString::fromUtf8("pushButtonBack"));
        pushButtonBack->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, pushButtonBack);


        verticalLayout->addLayout(formLayout);

        RegisterWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegisterWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 399, 29));
        menubar->setFont(font);
        menuRol_nator = new QMenu(menubar);
        menuRol_nator->setObjectName(QString::fromUtf8("menuRol_nator"));
        RegisterWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(RegisterWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RegisterWindow->setStatusBar(statusbar);

        menubar->addAction(menuRol_nator->menuAction());
        menuRol_nator->addAction(actionSair);

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QApplication::translate("RegisterWindow", "Registro", 0, QApplication::UnicodeUTF8));
        actionSair->setText(QApplication::translate("RegisterWindow", "Sair", 0, QApplication::UnicodeUTF8));
        labelRegistro->setText(QApplication::translate("RegisterWindow", "Registro", 0, QApplication::UnicodeUTF8));
        labelLogin->setText(QApplication::translate("RegisterWindow", "Login:", 0, QApplication::UnicodeUTF8));
        labelSenha->setText(QApplication::translate("RegisterWindow", "Senha", 0, QApplication::UnicodeUTF8));
        labelConfiramrSenha->setText(QApplication::translate("RegisterWindow", "Confirmar Senha", 0, QApplication::UnicodeUTF8));
        labelNomeCompleto->setText(QApplication::translate("RegisterWindow", "Nome Completo", 0, QApplication::UnicodeUTF8));
        labelEmail->setText(QApplication::translate("RegisterWindow", "Email", 0, QApplication::UnicodeUTF8));
        pushButtonRegister->setText(QApplication::translate("RegisterWindow", "Registrar", 0, QApplication::UnicodeUTF8));
        pushButtonBack->setText(QApplication::translate("RegisterWindow", "Voltar", 0, QApplication::UnicodeUTF8));
        menuRol_nator->setTitle(QApplication::translate("RegisterWindow", "Rol\303\252nator", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // REGISTERWINDOW_H
