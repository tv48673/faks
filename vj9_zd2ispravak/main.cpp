#include "Vrabac.h"
#include "Tarantula.h"
#include "Zohar.h"
#include "Brojac.h"
using namespace std;

int main()
{
	Vrabac vrabac(2,"vrabac");
	Tarantula tarantula(8,"tarantula");
	Zohar zohar(6,"zohar");

    Brojac br({ vrabac,tarantula,zohar });

	return 0;
}
