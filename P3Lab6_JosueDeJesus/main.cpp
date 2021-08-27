#include <iostream>
#include <vector>
#include "Integer.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu();
Integer *ingresarInteger();
void leer(vector<Integer*> lista);
void sumar(vector<Integer*> lista);
void restar(vector<Integer*> lista);
void multiplicar(vector<Integer*> lista);
void dividir(vector<Integer*> lista);
int operacionesInt();

int main(int argc, char** argv) {
	int opcion;
	vector<Integer*> listaInt; 
	while((opcion = menu()) != 7) {
		switch(opcion) {
			case 1:
				listaInt.push_back(ingresarInteger());
				break;
				
			case 4:
				int opcion2 = 0;
				do {
					switch(opcion2)
					{
						case 1:
							cout << "SUMAR" << endl;
							leer(listaInt);
			                sumar(listaInt);
			                cout << "----------------" << endl;
			                break;
			            
			            case 2:
			            	cout << "RESTAR" << endl;
			            	leer(listaInt);
			            	restar(listaInt);
			            	break;
			            	
			            case 3:
			            	cout << "MULTIPLICAR" << endl;
			            	leer(listaInt);
			            	multiplicar(listaInt);
			            	break;
			            	
			            case 4:
			            	cout << "DIVIDIR" << endl;
			            	leer(listaInt);
			            	dividir(listaInt);
			            	break;
					}
				}while ((opcion2 = operacionesInt()) != 5);		    
				break;	
		}
	}
}
		
int menu()
{
	int opcionMenu = 0;
	cout << "MENU\n"
	<< "1. Ingresar INTEGER\n"
	<< "2. Ingresar CHAR\n"
	<< "3. Ingresar STRING\n"
	<< "4. Operaciones INTEGER\n"
	<< "5. Operaciones CHAR\n"
	<< "6. Operaciones STRING\n"
	<< "7. Salir" << endl;
	cout << "Ingrese su opcion: ";
	cin >>  opcionMenu;
	system("cls");
	return opcionMenu;
}

Integer *ingresarInteger()
{
	string variable;
	int valor;
	system("cls");
	cout << "INGRESAR INTEGER" << endl;
	cout << "Ingrese la variable: ";
	cin >> variable;
	cout << "Ingrese el valor: ";
	cin >> valor;
	cout << "int " << variable << " = " << valor << endl;
	return new Integer(variable, valor);
}

int operacionesInt()
{
	int opcionOperacion = 0;
	cout << "OPERACIONES INTEGER" << endl;
	cout << "1. Sumar\n"
	<< "2. Restar\n"
	<< "3. Multiplicar\n"
	<< "4. Dividir\n"
	<< "5. Salir" << endl;
	cout << "Ingrese su opcion: ";
	cin >> opcionOperacion;
	return opcionOperacion;
}

void leer(vector<Integer*> lista) {
	cout << "Variables" << endl;
	for(int i = 0; i < lista.size(); i++) {
		cout << lista[i]->getVariable() << " = " << lista[i]->getValor() <<endl;
	}
}

void sumar(vector<Integer*> lista)
{
	string var1, var2;
	int val1, val2;
	int suma = 0;
	cout << "Ingrese nombre de variable 1: ";
	cin >> var1;
	cout << "Ingrese nombre de variable 2: ";
	cin >> var2;
	for(int i = 0; i < lista.size(); i++)
    {
    	if(lista[i]->getVariable() == var1)
    	{
    		val1 = lista[i]->getValor();
		}
		
		if(lista[i]->getVariable() == var2)
    	{
    		val2 = lista[i]->getValor();
		}
	}
	cout <<  val1 << " + " << val2 << " = " <<val1 + val2 << endl;
}

void restar(vector<Integer*> lista)
{
	string var1, var2;
	int val1, val2;
	int suma = 0;
	cout << "Ingrese nombre de variable 1: ";
	cin >> var1;
	cout << "Ingrese nombre de variable 2: ";
	cin >> var2;
	for(int i = 0; i < lista.size(); i++)
    {
    	if(lista[i]->getVariable() == var1)
    	{
    		val1 = lista[i]->getValor();
		}
		
		if(lista[i]->getVariable() == var2)
    	{
    		val2 = lista[i]->getValor();
		}
	}
	
	cout <<  val1 << " - " << val2 << " = " <<val1 - val2 << endl;
}

void multiplicar(vector<Integer*> lista)
{
	string var1, var2;
	int val1, val2;
	int suma = 0;
	cout << "Ingrese nombre de variable 1: ";
	cin >> var1;
	cout << "Ingrese nombre de variable 2: ";
	cin >> var2;
	for(int i = 0; i < lista.size(); i++)
    {
    	if(lista[i]->getVariable() == var1)
    	{
    		val1 = lista[i]->getValor();
		}
		
		if(lista[i]->getVariable() == var2)
    	{
    		val2 = lista[i]->getValor();
		}
	}
	
	cout <<  val1 << " x " << val2 << " = " <<val1 * val2 << endl;
}

void dividir(vector<Integer*> lista)
{
	string var1, var2;
	int val1, val2;
	int suma = 0;
	cout << "Ingrese nombre de variable 1: ";
	cin >> var1;
	cout << "Ingrese nombre de variable 2: ";
	cin >> var2;
	for(int i = 0; i < lista.size(); i++)
    {
    	if(lista[i]->getVariable() == var1)
    	{
    		val1 = lista[i]->getValor();
		}
		
		if(lista[i]->getVariable() == var2)
    	{
    		val2 = lista[i]->getValor();
		}
	}
	
	cout <<  val1 << " / " << val2 << " = " <<val1 / val2 << endl;
}
