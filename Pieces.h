#pragma once

class Pieces {
public:
	//Pieces();
protected:
	char name;
	int color;
	bool alive;
};

class Pawn : public Pieces {
public:
	void Location();
	void Movement();
	void Promotion();
};

class King : public Pieces {
public:
	void Location();
	void Movement();
	bool InCheck();
};

class Queen : public Pieces {
public:
	void Location();
	void Movement();
};

