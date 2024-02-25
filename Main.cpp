#include "Chessboard.h"

int main() {
	Chessboard c;
	std::string notation;

	//do{
		c.DisplayBoard();

		std::cout << "Your move: ";
		std::cin >> notation;
		c.PawnMovement();

	
	//} while ();
	
	
	return 0;
}			 