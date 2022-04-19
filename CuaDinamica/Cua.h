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
		Cua(const Cua& o);

		// DESTRUCTOR
		~Cua();

		// OPERADORS
		Cua& operator=(const Cua& o);

		// METODES CONSULTORS
		bool es_buida() const;
		Fitxa primera() const;

		// METODES MODIFICADORS
		void encua(Fitxa f);
		void desencua();

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
		void allibera();
};
#endif // !CUA_H
