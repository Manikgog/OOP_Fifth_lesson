#ifndef _FABRIKA_H_
#define _FABRIKA_H_
#include "food.h"
#include <vector>

class Fabrica
{
public:
	Milk* CreateMilk();
	Bread* CreateBread();
	Food* CreateRandom();
};


#endif

