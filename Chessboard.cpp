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

void Chessboard::PawnMovement() {}
