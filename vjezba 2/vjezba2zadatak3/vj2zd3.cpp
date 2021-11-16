#include <iostream>
#include <math.h>
using namespace std;

struct Rectangle
{
	int xA, yA, xB, yB;

	void init();
};
struct Circle
{
	int x,y,r;

	void init();
};
void Circle::init()
{
	cout << "Enter x" << endl;
	cin >> x;
	cout << "Enter y" << endl;
	cin >> y;
	cout << "Enter r" << endl;
	cin >> r;
}
void Rectangle::init()
{
	cout << "Enter x and y for the first point" << endl;
	cin >> xA;
	cin >> yA;
	cout << "Enter x andy for the second point" << endl;
	cin >> xB;
	cin >> yB;
}

int intersection(Circle circle, Rectangle* rec,int n)
{
    int i = 0;
    int point_distanceA;
    int point_distanceB;
	int zbr = 0;
	for (i = 0; i < n; i++)
	{
     point_distanceA = (rec[i].xA - circle.x) * (rec[i].xA - circle.x) + (rec[i].yA - circle.y) * (rec[i].yA - circle.y);
     point_distanceB = (rec[i].xB - circle.x) * (rec[i].xB - circle.x) + (rec[i].yB - circle.y) * (rec[i].yB - circle.y);
		if ( sqrt(point_distanceA) <= circle.r && sqrt(point_distanceB) >= circle.r )
			{zbr++;
			cout << "usa u 1.if" << endl;
			}
		else if (sqrt(point_distanceB) <= circle.r && sqrt(point_distanceA) >= circle.r)
			{zbr++;
			cout << "usa u 2. if" << endl;
			}
	}

	return zbr;
}

int main()
{
	Circle circle;
	Rectangle* rec;

	int a = 0;
	cout << "Enter the length of the aray" << endl;
	cin >> a;
	rec = new Rectangle[a];
	for (int i = 0; i < a; i++)
	{
		rec[i].init();
	}
    circle.init();
	cout << "Number of interescting rectangles: " << intersection(circle, rec, a) << endl;

	return 0;
}
