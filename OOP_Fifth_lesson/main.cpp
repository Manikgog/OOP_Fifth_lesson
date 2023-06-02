#include <iostream>
#include <string>
#include <map>
#include "food.h"
#include "supermarket.h"
#include "fabrika.h"

//class Client
//{
//private:
//	int _id;
//	std::string _name;
//	float _bill;
//public:
//	Client() : _id(0), _name(""), _bill(0.0f) {}
//	Client(int id, std::string name, float bill, std::map<int, Client*>& Map) : _id(id), _name(name), _bill(bill) 
//	{
//		Map[id] = this;
//	}
//
//	Client(const Client& const client) : _id(client._id), _name(client._name), _bill(client._bill)
//	{}
//
//	void ShowData()
//	{
//		std::cout << "Name: " << _name << ", " << "Bill: " << _bill << '\n';
//	}
//};

int main()
{
	/*
	Bread* b0 = new Bread;
	b0->ShowData();
	Bread* b = new Bread("bread", 33, 0.5, "Baton");
	b->ShowData();
	Milk* m = new Milk("milk", 56, 1.0, 5);
	m->ShowData();
	*/

	Supermarket* supermarket = new Supermarket();

	/*
	supermarket->AddProduct(b);
	supermarket->AddProduct(m);
	supermarket->ShowDataOfProducts();
	supermarket->Buy("milk");
	supermarket->ShowDataOfProducts();
	*/

	Food* food;
	Fabrica* fabrica = new Fabrica();
	food = fabrica->CreateRandom();
	supermarket->AddProduct(food);
	supermarket->ShowDataOfProducts();

	/*Client client1(24, 1);
	Client client2(client1);
	client1.ShowData();
	client2.ShowData();*/

	// map
	//std::map<int, std::string> clients =
	//{
	//	{1, "John"},
	//	{2, "Alex"},
	//	{3, "Bob"}
	//};

	//auto it = clients.begin();
	//std::cout << it->first << " - " << it->second << std::endl;	// 1 - John
	//++it;
	//std::cout << it->first << " - " << it->second << std::endl;	// 2 - Alex
	//--it;
	//std::cout << it->first << " - " << it->second << std::endl;	// 1 - John
	//std::advance(it, 2);
	//std::cout << it->first << " - " << it->second << std::endl;	// 3 - Bob

	//clients.insert(std::make_pair(4, "Arny"));
	//clients[5] = "Gary";
	//std::cout << clients[1] << std::endl;	// John
	//it = clients.find(2);
	//std::cout << it->first << " - " << it->second << std::endl;
	//clients.erase(it);
	//++it;
	//std::cout << it->first << " - " << it->second << std::endl;	// ошибка
	//std::cout << std::endl;
	//for (auto it = clients.begin(); it != clients.end(); ++it)
	//{
	//	std::cout << it->first << " - " << it->second << std::endl;
	//}

	/*
	std::map<int, Client*> clients;
	Client* client1 = new Client(12, "Joe", 987.1f, clients);
	Client* client2 = new Client(13, "Monika", 98.1f, clients);
	Client* client3 = new Client(10, "Chendler", 87.1f, clients);
	Client* client4 = new Client(9, "Ross", 97.1f, clients);

	for (auto it = clients.begin(); it != clients.end(); ++it)
	{
		std::cout << it->first << " - ";
		it->second->ShowData();
	}
	*/

	return 0;
}