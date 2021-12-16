#ifndef VRIME_H
#define VRIME_H
#include <iostream>

using namespace std;

class Timer
{
	int h;
	int m;
	double s;
public:
    void setHours(int hours);
	void setMinutes(int minutes);
	void setSeconds(double seconds);
	int getHours();
	int getMinutes();
	double getSeconds();
	Timer(int hours, int minutes, double seconds);
	Timer& operator-( Timer& t);
	Timer& operator+( Timer& t);
	Timer& operator+=(Timer& t);
	Timer& operator-=(Timer& t);
	Timer& operator/=(int n);
	operator double();
	friend bool operator<(const Timer& t, const Timer& t2);
	friend ostream& operator<<(ostream& out, const Timer& t);


};
#endif // VRIME_H
