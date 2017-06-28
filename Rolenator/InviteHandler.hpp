#ifndef INVITEHANDLER_HPP
#define INVITEHANDLER_HPP

#include <QMainWindow>
#include <QMessageBox>
#include "InviteWindow.hpp"
#include "Invite.hpp"
#include "DAORegistry.hpp"

class InviteHandler : public QObject{
private:
	Q_OBJECT
	Ui_InviteWindow inviteWindow;
	QMainWindow *mother;
	Invite **invites;
	int pointer,n;
public:
	InviteHandler(QMainWindow *mother, Invite **invites, int n);
	virtual ~InviteHandler();

public slots:
	void accept();
	void decline();
signals:
	void updateInvites(); 
};

#endif

