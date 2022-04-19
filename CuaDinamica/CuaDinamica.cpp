// ENTRADA: Si
// SORTIDA: Aquest programa permet encuar i desencuar fitxes d'una cua, i mostrar la primera o tota la cua.
// Pau Arqueros i Sureda 2022

#include <iostream>
using namespace std;
#include "Cua.h"

// ACCIONS I FUNCIONS
int introduir_opcio()
{
	cout << "Introdueix opcio: ";
	int opcio; cin >> opcio;
	while (opcio < 1 or opcio > 6)
	{
		cout << "Introdueix opcio: ";
		cin >> opcio;
	}
	return opcio;
}
void encua(Cua& c)
{
	Fitxa fitxa; fitxa.llegeix();
	c.encua(fitxa);
}
void mostrar_menu()
{
	cout << "1) Encuar fitxa" << endl;
	cout << "2) Desencuar fitxa" << endl;
	cout << "3) Mostrar primera" << endl;
	cout << "4) Mostrar cua sencera" << endl;
	cout << "5) Mostrar menu" << endl;
	cout << "6) Sortir" << endl;
}

// MAIN
int main()
{
	Cua c;
	mostrar_menu();
	int opcio = introduir_opcio();
	while (opcio != 6)
	{
		if (opcio == 1) encua(c);
		else if (opcio == 2) c.desencua();
		else if (opcio == 3) 
		{
			c.primera(); 
			cout << endl; // ESTETICA
		}
		else if (opcio == 4) c.mostrar();
		else if (opcio == 5) mostrar_menu();

		opcio = introduir_opcio();
	}
	return 0;
}