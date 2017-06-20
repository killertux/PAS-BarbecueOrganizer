CREATE TABLE user (
	login VARCHAR(50),
	name VARCHAR(50),
	email VARCHAR(50),
	password VARCHAR(32),
	PRIMARY KEY(login)
);
CREATE TABLE event (
	name VARCHAR(100),
	date DATE,
	description TEXT,
	price FLOAT,
	local VARCHAR(100),
	food BOOLEAN,
	drink BOOLEAN,
	eid BIGINT AUTO_INCREMENT,
	PRIMARY KEY(eid)
);
