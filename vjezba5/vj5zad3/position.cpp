#include "Position.h"
using namespace std;

void Position::init(double x1, double y1, double z1)
{
	x = x1;
	y = y1;
	z = z1;
}

void Position::pseudoInit(int a, int b)
{
	int min;
	int max;
	if (a < b)
    {
        min = a;
        max = b;
    }
    else
    {
        min = b;
        max = a;
    }

	random_device rd;
	mt19937 rng(rd());
	uniform_int_distribution<int> uni(min, max);
	x = uni(rng);
	y = uni(rng);
	z = uni(rng);
}
int Position::getX()
{
	return x;
}
int Position::getY()
{
	return y;
}
int Position::getZ()
{
	return z;
}

float Position::lenght2D(Position b)
{
	float lenght = (b.getX() - x) * (b.getX() - x) + (b.getY() - y) * (b.getY() - y);

	return sqrt(lenght);
}

float Position::lenght3D(Position b)
{
	float lenght = (b.getX() - x) * (b.getX() - x) + (b.getY() - y) * (b.getY() - y) + (b.getZ() - z) * (b.getZ() - z);
	return sqrt(lenght);
}




