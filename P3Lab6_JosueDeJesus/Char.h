#ifndef CHAR_H
#define CHAR_H
#include <string>
using namespace std;

class Char
{
	private:
		string variable;
		char character;
	public:
		Char();
		Char(string, char);
		Char operator<<(const Char&) const;
		
		void setVariable(string);
		string getVariable();
		
		void setCharacter(char);
		char getCharacter();
	protected:
};

#endif