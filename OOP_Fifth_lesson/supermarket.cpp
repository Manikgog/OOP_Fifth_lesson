#include "supermarket.h"

void Supermarket::ShowDataOfProducts()
{
	if (_products.size() > 0) {
		for (const auto it : _products)
		{
			it->ShowData();
		}
		return;
	}
}

Food* Supermarket::SearchByName(std::string name)
{
	for (const auto it : _products)
	{
		if (name == it->GetName())
		{
			return it;
		}
	}
}

void Supermarket::AddProduct(Food* food)
{
	_products.push_back(food);
}

void Supermarket::Buy(std::string name)
{
	size_t count = 0;
	for (const auto& it : _products)
	{
		if (name == it->GetName())
		{
			delete it;
			_products.erase(_products.begin() + count);
		}
		count++;
	}
}

