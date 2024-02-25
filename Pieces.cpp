#include "Pieces.h"

Pawn::Pawn() {
	name = 'p';
	color = 0;
}
void Pawn::Location() {}
void Pawn::Movement() {}
void Pawn::Promotion() {}

King::King() {
	name = 'k';
	color = 0;
}
void King::Location() {}
void King::Movement() {}
bool King::InCheck() {
	return false;
}

Queen::Queen() {
	name = 'q';
	color = 0;
}
void Queen::Location() {}
void Queen::Movement() {}
