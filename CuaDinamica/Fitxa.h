#ifndef FITXA_H
#define FITXA_H
class Fitxa
{
	// DESCRIPCCIO: Fitxa que te un element (aigua, foc, terra, vent i eter) i un valor.
	// INVARIABLE: Fitxa pren valors de 1 a 20. Caracters que pot ser una fitxa: a,f,t,v,e
	public:
		// CONSTRUCTORS
		Fitxa();
		Fitxa(char tipus, int valor);

		// METODES CONSULTORS
		void mostra() const;

		// METODES MODIFICADORS
		void llegeix();

	private:
		// ATRIBUTS
		char a_tipus;
		int a_valor;

};
#endif // !FITXA_H



