#include "Char.h"

Char::Char() {
}

Char::Char(string variable, char character) {
	this-> variable = variable;
	this->character = character;
}

Char Char::operator<< (const Char& c) const {
	Char resultado;
	return resultado;
}

void Char::setVariable(string variable) {
	
}
string Char::getVariable() {
	return variable;
}

void Char::setCharacter(char character) {
	
}
char Char::getCharacter() {
	return character;
}