#ifndef _SUPERMARKET_H_
#define _SUPERMARKET_H_

#include <vector>
#include "food.h"

class Supermarket
{
private:
	std::vector<Food*> _products;

public:
	void ShowDataOfProducts();

	Food* SearchByName(std::string name);

	void Buy(std::string name);

	void AddProduct(Food* food);
};


#endif