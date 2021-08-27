#include "Integer.h"

Integer::Integer() {
}

Integer::Integer(string variable, int valor) {
	this->valor = valor;
	this ->variable = variable;
}

void Integer::setVariable(string variable) {
	
}

string Integer::getVariable() {
	return variable;
}

void Integer::setValor(int integer) {
	
}

int Integer::getValor() {
	return valor;
}