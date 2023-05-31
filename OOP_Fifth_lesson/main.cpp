#include <iostream>
#include <string>
#include "food.h"



int main()
{
	Bread b0;
	b0.ShowData();
	Bread b("bread", 33, 0.5, "Baton");
	b.ShowData();
	Milk m("milk", 56, 1.0, 5);
	m.ShowData();

	return 0;
}