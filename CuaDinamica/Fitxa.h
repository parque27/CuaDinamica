#ifndef FITXA_H
#define FITXA_H
class Fitxa
{
public:
	// CONSTRUCTOR
	Fitxa();
	Fitxa(char tipus, int valor);
	// CONSULTORS
	void mostra() const;
	// MODIFICADORS
	void llegeix();
private:
	char a_tipus;
	int a_valor;
};
#endif // !FITXA_H



