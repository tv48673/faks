#include "Vrabac.h"
#include "Tarantula.h"
#include "Zohar.h"
#include "Brojac.h"

int main()
{
	Vrabac vrabac(2,"vrabac");
	Tarantula tarantula(8,"tarantula");
	Zohar zohar(6,"zohar");

    Zivotinja zivotinja[0] = zohar;
    zivotinja[1] = tarantula;
    zivotinja[2] = vrabac;

	Brojac br(3,zivotinja);

	return 0;
}
