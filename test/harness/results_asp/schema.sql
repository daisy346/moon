CREATE TABLE builds (
	revision INTEGER,
	runtime DATE
);

CREATE TABLE testcases (
	id INTEGER PRIMARY KEY,
	name VARCHAR(255),
	masterfile VARCHAR(255)
);

CREATE TABLE results (
	testcaseid INTEGER,
	runtime DATE,
	status VARCHAR(32),
	renderedfile VARCHAR(255),
	info VARCHAR(255)
);

CREATE TABLE taggedcases (
	testcaseid INTEGER,
	tagid INTEGER
);

CREATE TABLE tags (
	id INTEGER PRIMARY KEY,
	name VARCHAR(32)
);

