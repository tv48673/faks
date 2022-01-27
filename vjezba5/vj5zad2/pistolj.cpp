#include "pistolj.h"
using namespace std;

Gun::Gun(int a, int b)
{
	pos.pseudoInit(a, b);
}

Gun::~Gun()
{
}

void Gun::reload(char c)
{
    if (c== 'R')
    {
        cout << "unesite malo slovo";
    }
	if (c == 'r')
	{
		cout << "punjenje" << endl;
		currentAmmo = 20;
		cout << "trenutan broj metaka: " << currentAmmo << endl;
	}
}

void Gun::shoot(char c)
{
    if (c== 'S')
    {
        cout << "unesite malo slovo";
    }
	if (c == 's' && currentAmmo > 0)
	{
		cout << "bum" << endl;
		currentAmmo--;
		cout << "trenutno metaka: " << currentAmmo << endl;
	}
	else if (c == 's' && currentAmmo <= 0)
	{
		cout << "nema metaka" << endl;
	}
}
