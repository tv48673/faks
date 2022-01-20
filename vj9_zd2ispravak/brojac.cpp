#include "Brojac.h"
#include <vector>
using namespace std;

Brojac::Brojac(vector<Zivotinja> z)
{

	int ukupNogu = 0;
	for (int i = 0; i < z.size(); i++)
	{
		cout << "Dodan: " << z[i].DohvatiVrstu() << endl;
		ukupNogu += z[i].DohvatibrNogu();
	}
	cout << "Ukupno nogu: " << ukupNogu << endl;
}
