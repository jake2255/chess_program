#pragma once

class Pieces {
public:
	//Pieces();
protected:
	char name;
	int color;
};

class Pawn : public Pieces {
public:
	Pawn();
	void Location();
	void Movement();
	void Promotion();
};

class King : public Pieces {
public:
	King();
	void Location();
	void Movement();
	bool InCheck();
};

class Queen : public Pieces {
public:
	Queen();
	void Location();
	void Movement();
};

