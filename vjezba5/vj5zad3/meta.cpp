
#include "meta.h"


Target::Target(int a, int b)
{
	srand(time(NULL));
	pA.pseudoInit(a, b);
	double _x;
	double _y;
	double _z;
	_x = pA.getX();
	_y = pA.getY();
	_z = pA.getZ();
	pB.init(_x, _y, _z);
}

Target::~Target()
{
}

Position Target::getPosA()
{
	return pA;
}

Position Target::getPosB()
{
	return pB;
}

bool Target::isHit()
{
	return hit;
}

void Target::change(bool b)
{
	hit = b;
}
