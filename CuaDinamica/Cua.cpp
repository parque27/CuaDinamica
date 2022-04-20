#include "Cua.h"
#include <iostream>
using namespace std;

// CONSTRUCTORS
// CONSTRUCTOR PER DEFECTE
Cua::Cua()
{
	a_primera = a_ultima = NULL; // El primer node és igual a l'últim, que apunta a NULL. Per tant, tot és NULL.
}
// CONSTRUCTOR COPIA
Cua::Cua(const Cua& o)
{
	a_primera = a_ultima = NULL;
	copia(o);
}

// DESTRUCTOR
Cua::~Cua()
{
	allibera(); // El destructor crida a una funció privada que allibera la memòria.
}

// OPERADORS
Cua& Cua::operator=(const Cua& o)
{
	if (this != &o)
	{
		allibera();
		copia(o);
	}
	return *this;
}

// METODES CONSULTORS
bool Cua::es_buida() const
{
	return a_primera == NULL; // Retornem true si el primer node apunta a NULL, fals altrament.
}
void Cua::primera() const
{
	a_primera->f.mostra(); // Cridem la acció mostra() de la fitxa del primer node de la cua.
}
void Cua::mostrar() const
{

	Node* p = new Node;
	p = a_primera;
	while (p != NULL)
	{
		p->f.mostra(); cout << "   ";
		p = p->seg;
	}
	delete p;
	cout << endl; // ESTETICA
}

// METODES MODIFICADORS
void Cua::encua(Fitxa fitxa)
{
	Node* nou = new Node;
	nou->f = fitxa;
	nou->seg = NULL;
	if (es_buida()) 
		a_primera = a_ultima = nou;
	else
	{
		a_ultima->seg = nou;
		a_ultima = nou;
	}
}
void Cua::desencua()
{
	Node* aux = a_primera;
	if (a_primera == a_ultima) a_primera = a_ultima = NULL;
	else a_primera = a_primera->seg;
	delete aux;
}

// METODES D'INSTNACIA
void Cua::copia(const Cua& o)
{
	Node* p = o.a_primera;
	while (p != NULL)
	{
		encua(p->f);
		p = p->seg;
	}
}
void Cua::allibera()
{
	while (a_primera != NULL)
	{
		Node* aux = a_primera;
		a_primera = a_primera->seg;
		delete aux;
	}
	a_ultima = NULL;
}