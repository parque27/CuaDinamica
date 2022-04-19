#include <iostream>
using namespace std;
#include "Cua.h"

int introduir_opcio()
{
	int o;
	cout << "Opcio: ";
	cin >> o;
	return o;
}
void encua(Cua& c)
{

}
int main()
{
	Cua c;

	int opcio = introduir_opcio();
	while (opcio != 4)
	{
		if (opcio == 1) encua(c);
		else if (opcio == 2)
		else if (opcio == 3)

		opcio = introduir_opcio();
	}
	return 0;
}