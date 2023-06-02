#include "fabrika.h"
#include <ctime>

Milk* Fabrica::CreateMilk()
{
	std::vector<int> fatPercent =
	{
		3, 5, 10, 15
	};
	srand(time(NULL));
	Milk* milk = new Milk("Milk", 50.6f, 1.0f, fatPercent.at(std::rand() % fatPercent.size()));
	return milk;
}

Bread* Fabrica::CreateBread()
{
	std::vector<std::string> sortOfBread =
	{
		"Borodinsky", "White", "Black", "Baton"
	};
	srand(time(NULL));
	Bread* bread = new Bread("Milk", 50.6f, 1.0f, sortOfBread.at(std::rand() % sortOfBread.size()));
	return bread;
}

Food* Fabrica::CreateRandom()
{
	int x = rand() % 2;
	if (x == 0)
		return CreateMilk();
	else if (x == 1)
		return CreateBread();
}

