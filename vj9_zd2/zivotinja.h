#ifndef ZIVOTINJA_H
#define ZIVOTINJA_H
#include <string>
class Zivotinja
{
public:
	int DohvatibrNogu();
	std::string DohvatiVrstu();

protected:
	std::string vrste;
	int brojNogu;
};
#endif // ZIVOTINJA_H
