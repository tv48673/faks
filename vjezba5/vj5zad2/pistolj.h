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

    int Ammo = 20;
	Position pos;



};
#endif // DODATNO_H
