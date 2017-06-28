CREATE TABLE user (
	login VARCHAR(50),
	name VARCHAR(50),
	email VARCHAR(50),
	password VARCHAR(32),
	PRIMARY KEY(login)
);
CREATE TABLE event (
	name VARCHAR(100),
	owner VARCHAR(50),
	date DATETIME,
	description TEXT,
	price FLOAT,
	local VARCHAR(100),
	food BOOLEAN,
	drink BOOLEAN,
	eid BIGINT AUTO_INCREMENT,
	PRIMARY KEY(eid),
	foreign key(owner) REFERENCES user(login)
);
CREATE TABLE invite (
	user VARCHAR(50),
	eid BIGINT,
	accepted BOOLEAN,
	confirmed BOOLEAN,
	PRIMARY KEY(user, eid),
	foreign key(user) REFERENCES user(login)
);
CREATE TABLE message(
	mid BIGINT AUTO_INCREMENT,
	message VARCHAR(255),
	from_user VARCHAR(50),
	to_user VARCHAR(50),
	was_read BOOLEAN,
	primary key(mid),
	foreign key(from_user) REFERENCES user(login),
	foreign key(to_user)	REFERENCES user(login)
);
