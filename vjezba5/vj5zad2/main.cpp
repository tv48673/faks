#include <iostream>
#include "Position.h"
#include "pistolj.h"
using namespace std;

int main()
{
	Gun g(1,5);
	cout << "s for shooting, r for reload and e for exit" << endl;
	char c;
	while (c != 'e')
	{
		cin >> c;
		g.shoot(c);
		g.reload(c);
	}

	return 0;
}
