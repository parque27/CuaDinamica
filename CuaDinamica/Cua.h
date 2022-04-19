#ifndef CUA_H
#define CUA_H
#include "Fitxa.h"

class Cua
{
	// DESCRIPCCIO:
	// INVARIABLE:
	public:
		// CONSTRUCTORS
		Cua();
		// Pre: --; Post: cua buida
		Cua(const Cua& o);
		// Pre: --; Post: aquesta cua es copia de la cua o

		// DESTRUCTOR
		~Cua();
		// Pre: --; Post: memoria alliberada
		
		// OPERADORS
		Cua& operator=(const Cua& o);
		// Pre: --; Post: aquesta cua es copia de o

		// METODES CONSULTORS
		bool es_buida() const;
		// Pre: --; Post: retorna true si la cua es buida, fals altrament
		Fitxa primera() const;
		// Pre: cua no buida; Post: retorna una copia del primer element de la cua

		// METODES MODIFICADORS
		void encua(Fitxa f);
		// Pre: --; Post: ha afegit la fitxa f al final de la cua
		void desencua();
		// Pre: cua no buida; Post: ha eliminat el primer element de la cua

	private:
		// ESTRUCTURA DE DADES
		struct Node
		{
			Fitxa f;
			Node* seg;
		};

		// ATRIBUTS
		Node* a_primera;
		Node* a_ultima;

		// METODES D'INSTANCIA
		void copia(const Cua& o);
		// Pre: cua buida; Post: aquesta cua és copia de o
		void allibera();
		// Pre: --; Post: cua buida
};
#endif // !CUA_H
