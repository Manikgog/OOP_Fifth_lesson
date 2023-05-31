#include "food.h"

Food::Food(std::string name, float price, float weight) 
	: _name(name), _price(price), _weight(weight), _condition(100.0f) {}

Bread::Bread(std::string name, float price, float weight, std::string typeOfBread)
	: Food(name, price, weight), _typeOfBread(typeOfBread) {}

Milk::Milk(std::string name, float price, float weight, int fatPeercent)
	: Food(name, price, weight), _fatPeercent(fatPeercent) {}

void Food::ShowData()
{
	std::cout << "Name of product: " << _name << std::endl;
	std::cout << "Condition of product: " << _condition << std::endl;
	std::cout << "Price of product: " << _price << std::endl;
	std::cout << "Weight of product: " << _weight << std::endl;
}

void Bread::ShowData()
{
	Food::ShowData();
	std::cout << "Bread: \"" << _typeOfBread << "\"" << "\n\n";
}

void Milk::ShowData()
{
	Food::ShowData();
	std::cout << "Fat of milk: " << _fatPeercent << "%\n\n";
}