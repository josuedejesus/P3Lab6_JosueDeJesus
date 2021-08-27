#pragma once
#ifndef INTEGER_H
#define INTEGER_H
#include <string>
using namespace std;

class Integer
{
	private:
		string variable;
		int valor;
	public:
		Integer();
		Integer(string, int);
		
		void setVariable(string);
		string getVariable();
		
		void setValor(int);
		int getValor();
	protected:
};

#endif