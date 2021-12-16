#include "vrime.h"
#include "dodatno.h"

using namespace std;
int Timer::getHours()
{
	return h;
}
int Timer::getMinutes()
{
	return m;
}
double Timer::getSeconds()
{
	return s;
}
void Timer::setHours(int hours)
{
	h = hours;
}
void Timer::setMinutes(int minutes)
{
	m = minutes;
}
void Timer::setSeconds(double seconds)
{
	s = seconds;
}
Timer::Timer(int hours, int minutes, double seconds)
{
	h = hours;
	m = minutes;
	s = seconds;
}
Timer& Timer::operator-( Timer& t)
{
	h = h-t.h;
	m = m-t.m;
	s = s-t.s;
	return *this;
}
Timer& Timer::operator+( Timer& t)
{
	h = h+t.h;
	m = m+t.m;
	s = s+t.s;
	return *this;
}
Timer& Timer::operator/=(int n)
{
	double time = ((h * 3600) + (m * 60) + s);
	double time2 = time / n;
	h = time2 / 3600;
	m = time2 / 60 - h * 60;
	s = time2 - m * 60 - h * 3600;
	return *this;
}
Timer& Timer::operator+=(Timer& a)
{
	double millis = ((h * 3600) + (m * 60) + s)*1000;
	double millisOffset = ((a.h * 3600) + (a.m * 60) + a.s)*1000;
	millis += millisOffset;
	h = millis / 1000 / 3600;
	m = millis /1000 / 60 - h*60;
	s = millis / 1000 - m * 60 - h * 3600;
	return *this;
}
Timer& Timer::operator-=(Timer& a)
{
	double millis = ((h * 3600) + (m * 60) + s)*1000;
	double millisOffset = ((a.h * 3600) + (a.m * 60) + a.s)*1000;
	millis -= millisOffset;
	h = millis / 1000 / 3600;
	m = millis /1000 / 60 - h*60;
	s = millis / 1000 - m * 60 - h * 3600;
	return *this;
}

Timer::operator double()
{
	double time = h * 3600 + m * 60 + s;
	return time;
}

ostream& operator<<(ostream& out, const Timer& t)
{
	out << t.h << ":" << t.m << ":" << t.s;
	return out;
}

bool operator<(const Timer& t, const Timer& t2)
{
	double seconds1 = t.h * 3600 + t.m * 60 + t.s;
	double seconds2 = t2.h * 3600 + t2.m * 60 + t2.s;
	if (seconds1 > seconds2)
        return false;
    else
        return true;
}

Penalty::Penalty(int a)
{
	penalty = a;
}

void Penalty::operator()(Timer& a)
{
	double millis = (a.getMinutes() * 60 + a.getSeconds())*1000;
	millis += penalty*1000;
	a.setHours(a.getHours());
	a.setMinutes(millis / 1000 / 60000);
	a.setSeconds(millis / 1000 - a.getMinutes()*60);


}

