#include "Chessboard.h"

int main() {
	Chessboard c;
	std::string notation;

	int i = 0;
	while(i<5){
		c.DisplayBoard();
		std::cout << "Your move: ";
		std::cin >> notation;
		c.MakeMove(notation);
		system("cls");
		i++;
	}
	
	
	return 0;
}			 