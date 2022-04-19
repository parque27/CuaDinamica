#include "Fitxa.h"
#include <iostream>
using namespace std;

Fitxa::Fitxa()
{
	a_tipus = ' ';
	a_valor = 0;
}

Fitxa::Fitxa(char element, int valor)
{
	a_tipus = element;
	a_valor = valor;
}

// CONSULTORS
void Fitxa::mostra() const
{
	cout << "(" << a_tipus;
	if (a_valor <= 9) cout << 0;
	cout << a_valor << ")";
}

void Fitxa::llegeix()
{
	cin >> a_tipus >> a_valor;
}