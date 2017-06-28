#ifndef INVITEDAO_HPP
#define INVITEDAO_HPP

#include "DAO.hpp"
#include "Invite.hpp"

#include <QVariant>

class InviteDAO : public DAO {
private:
public:
	InviteDAO(QSqlDatabase *connection);
	~InviteDAO();
	
	Invite *getInvite(QString login, int eid);
	void insertInvite(Invite *invite);
	void deleteInvite(Invite *invite);
	void deleteAllFromEventId(int eventId);
	void updateInvite(Invite *invite);
	int getAllOpenInviteTo(Invite ***invites, QString login);
};

#endif
