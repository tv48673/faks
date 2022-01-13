#include "Brojac.h"

Brojac::Brojac(int velicina,Zivotinja z[])
{

	int ukupNogu = 0;
	for (int i = 0; i < velicina; i++)
	{
		std::cout << "Dodan: " << z[i].DohvatiVrstu() << std::endl;
		ukupNogu += z[i].DohvatibrNogu();
	}
	std::cout << "Ukupno nogu: " << ukupNogu << std::endl;
}
