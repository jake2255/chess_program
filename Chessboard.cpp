#include "Chessboard.h"

void Chessboard::DisplayBoard() {
	for (int i = 0; i < 8; i++) {
		std::cout << "---------------------------------" << std::endl;
		for (int j = 0; j < 8; j++) {
			std::cout << "| " << chessBoard[i][j].first << " ";
		}
		std::cout << "|" << std::endl;
	}
	std::cout << "---------------------------------" << std::endl;
}


bool Chessboard::IsKingInCheck() {
	return false;
}

bool Chessboard::IsGameOver() {
	return false;
}

void Chessboard::PawnMovement(std::pair<int,int>move) {
	int x = move.second;
	int y = move.first;
	//std::cout << "x: " << x << ", y: " << y << std::endl;

	for (int i = 0; i < 8; i++) {
		if (chessBoard[i][y].first == 'P' && chessBoard[i][y].second == 0) {
			chessBoard[x][y].first = 'P';
			chessBoard[x][y].second = 0;
			chessBoard[i][y].first = ' ';
			chessBoard[i][y].second = 1;
		}
	}
}

void Chessboard::MakeMove(std::string notation) {
	std::pair<int,int>move = NotationTranslator(notation);
	PawnMovement(move);
}

std::pair<int,int> Chessboard::NotationTranslator(std::string notation) {

	std::pair<int,int>move;
	if (notation.at(0) == 'a') {
		move.first = 0;											    
	}
	else if (notation.at(0) == 'b') {
		move.first = 1;
	}
	else if (notation.at(0) == 'c') {
		move.first = 2;
	}
	else if (notation.at(0) == 'd') {
		move.first = 3;
	}
	else if (notation.at(0) == 'e') {
		move.first = 4;
	}
	else if (notation.at(0) == 'f') {
		move.first = 5;
	}
	else if (notation.at(0) == 'g') {
		move.first = 6;
	}
	else if (notation.at(0) == 'h') {
		move.first = 7;
	}
	move.second = 7 - (notation.at(1) - 49);
	return move;
}
