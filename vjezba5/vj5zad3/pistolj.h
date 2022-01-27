#ifndef PISTOLJ_H
#define PISTOLJ_H
#include "Position.h"
#include <iostream>

class Gun
{
public:
	Gun(int a,int b);
	~Gun();
	void shoot(char c);
	void reload(char c);
	int currentAmmo = 20;
private:
	Position pos;
	int Ammo = 20;


};


#endif // PISTOLJ_H

