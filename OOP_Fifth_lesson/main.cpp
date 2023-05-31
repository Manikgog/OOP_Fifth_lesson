#include <iostream>
#include <string>
#include "food.h"
#include "supermarket.h"



int main()
{
	Bread b0;
	b0.ShowData();
	Bread b("bread", 33, 0.5, "Baton");
	b.ShowData();
	Milk m("milk", 56, 1.0, 5);
	m.ShowData();

	Supermarket* supermarket = new Supermarket();
	supermarket->AddProduct(&b);
	supermarket->AddProduct(&m);
	supermarket->ShowDataOfProducts();
	supermarket->Buy("milk");
	supermarket->ShowDataOfProducts();
	return 0;
}