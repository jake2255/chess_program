#pragma once

#include <iostream>
#include <vector>
#include <string>

class Chessboard {
public:
	void DisplayBoard();
	bool IsKingInCheck();
	bool IsGameOver();
	void PawnMovement(std::pair<int,int>);
	//void KingMovement();
	//void KnightMovement();
	//void BishopMovement();
	//void RookMovement();
	//void QueenMovement();
	void MakeMove(std::string);
	std::pair<int,int> NotationTranslator(std::string);

private:
	// The initial chess board with all pieces
	std::vector<std::vector<std::pair<char,int>>>chessBoard{
		{{'R',2},{'N',2},{'B',2},{'Q',2},{'K',2},{'B',2},{'N',2},{'R',2}},
		{{'P',2},{'P',2},{'P',2},{'P',2},{'P',2},{'P',2},{'P',2},{'P',2}},
		{{' ',1},{' ',1},{' ',1},{' ',1},{' ',1},{' ',1},{' ',1},{' ',1}},
		{{' ',1},{' ',1},{' ',1},{' ',1},{' ',1},{' ',1},{' ',1},{' ',1}},
		{{' ',1},{' ',1},{' ',1},{' ',1},{' ',1},{' ',1},{' ',1},{' ',1}},
		{{' ',1},{' ',1},{' ',1},{' ',1},{' ',1},{' ',1},{' ',1},{' ',1}},
		{{'P',0},{'P',0},{'P',0},{'P',0},{'P',0},{'P',0},{'P',0},{'P',0}},
		{{'R',0},{'N',0},{'B',0},{'Q',0},{'K',0},{'B',0},{'N',0},{'R',0}}};
};