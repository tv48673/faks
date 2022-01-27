#ifndef POSITION_H
#define POSITION_H
#pragma once
#include <random>
using namespace std;
class Position
{
public:
	void init(double x1 = 0, double y1 = 0, double z1 = 0);
	void pseudoInit(int a,int b);
	int getX();
	int getY();
	int getZ();
	float lenght2D(Position b);
	float lenght3D(Position b);
private:
	double x = 0;
	double y = 0;
	double z = 0;
};
#endif // POSITION_H
