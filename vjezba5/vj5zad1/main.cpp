#include <iostream>
#include "Position.h"
using namespace std;

int main()
{
	Position p1;
	int x,y,z;
	cout << "unesi x,y,z;" << endl;
	cin >> x;
	cin >> y;
	cin >> z;
	cout << "x: " << x << " y: " << y << " z: " << z << endl;
	p1.init(x, y, z);
	Position p2;
	p2.pseudoInit(1, 10);
	cout << "x: " << p2.getX() << " y: " << p2.getY() << " z: " << p2.getZ() << endl;
	cout << "udaljenost u 2D: " << p1.lenght2D(p2) << endl;
	cout << "udaljenost u 3D: " << p1.lenght3D(p2) << endl;
	return 0;
}
