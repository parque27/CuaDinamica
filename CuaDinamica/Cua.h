#ifndef CUA_H
#define CUA_H
#include "Fitxa.h"
class Cua
{
public:
	Cua();
	Cua(const Cua& o);
	~Cua();

	bool es_buida() const;
	Fitxa primera() const;

	void encua(Fitxa f);
	void desencua();

	Cua& operator=(const Cua& o);
private:
	struct Node
	{
		Fitxa f;
		Node* seg;
	};
	Node* a_primera;
	Node* a_ultima;

	void copia(const Cua& o);
	void allibera();
};
#endif // !CUA_H

// TODO: IMPLEMENTAR CLASSE .CPP
