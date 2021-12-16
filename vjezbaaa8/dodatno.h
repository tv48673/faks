#ifndef DODATNO_H
#define DODATNO_H
#include "vrime.h"
class Penalty
{
	int penalty;
public:
	Penalty(int a);
	void operator()(Timer& a);

};
#endif // DODATNO_H
