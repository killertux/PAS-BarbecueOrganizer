#include "InviteDAO.hpp"

InviteDAO::InviteDAO(QSqlDatabase* connection) : DAO(connection){
}

InviteDAO::~InviteDAO(){
}

void InviteDAO::insertInvite(Invite* invite){
	QString query = "INSERT INTO invite(user, eid, accepted, confirmed) VALUES (";
	query+= "'"+invite->getTo()+"',";
	query+= "'"+QString::number(invite->getEventId())+"',";
	query+= "'"+((invite->getAccepted())?QString("1"):QString("0"))+"',";
	query+= "'"+((invite->getConfirmed())?QString("1"):QString("0"))+"');";
	this->update(query);
}

void InviteDAO::deleteAllFromEventId(int eventId){
	QString query = "DELETE FROM invite WHERE eid ='"+QString::number(eventId)+"';";
	this->update(query);
}

int InviteDAO::getAllOpenInviteTo(Invite ***invites, QString login){
	QString query = "SELECT i.eid, i.user, i.accepted,i.confirmed, e.owner FROM invite AS i NATURAL JOIN event AS e WHERE i.accepted = '0' AND i.user = '"+login+"';";
	QSqlQuery result = this->retrieve(query);
	if(result.size() <= 0 )
		return 0;
	(*invites) = new Invite* [result.size()];
	int n=0;
	while(result.next()){
		Invite *invite = new Invite();
		invite->setEventId(result.value(0).toInt());
		invite->setTo(result.value(1).toString());
		invite->setAccepted(result.value(2).toBool());
		invite->setConfirmed(result.value(3).toBool());
		invite->setFrom(result.value(4).toString());
		(*invites)[n] = invite;
		n++;
 	}
	return result.size();
}

void InviteDAO::updateInvite(Invite* invite){
	QString query = "UPDATE invite SET accepted = '"+((invite->getAccepted())?QString("1"):QString("0"))+"', confirmed = '"+((invite->getConfirmed())?QString("1"):QString("0"))+"' WHERE eid = '"+QString::number(invite->getEventId())+"' AND user = '"+invite->getTo()+"';";
	this->update(query);
}

void InviteDAO::deleteInvite(Invite* invite){
	QString query = "DELETE FROM invite WHERE eid ='"+QString::number(invite->getEventId())+"' AND user = '"+invite->getTo()+"';";
	this->update(query);
}

Invite * InviteDAO::getInvite(QString login, int eid){
	QString query = "SELECT i.eid, i.user, i.accepted,i.confirmed, e.owner FROM invite AS i NATURAL JOIN event AS e WHERE i.eid = '"+QString::number(eid)+"' AND i.user = '"+login+"';";
	QSqlQuery result = this->retrieve(query);

	if(result.size() <= 0 )
		return NULL;
	result.first();
	Invite *invite = new Invite();
	invite->setEventId(result.value(0).toInt());
	invite->setTo(result.value(1).toString());
	invite->setAccepted(result.value(2).toBool());
	invite->setConfirmed(result.value(3).toBool());
	invite->setFrom(result.value(4).toString());
	return invite;
}




