#include <iostream>
#include <vector>
#include "meta.h"
#include "pistolj.h"
#include "position.h"
using namespace std;

int main()
{
	vector<Target> targets;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		Target t(0,33);
		targets.push_back(t);
	}
	Gun g(0,10);
	int hitTarget = 0;
	for (int i = 0; i < n; i++)
	{
		if (targets[i].getPosA().getX() < g.getPos().getX() && targets[i].getPosA().getY() < g.getPos().getY() &&
			targets[i].getPosB().getX() > g.getPos().getX() && targets[i].getPosB().getY() > g.getPos().getY())
		{
			hitTarget++;
		}
	}
	cout << hitTarget << endl;
	return 0;
}
