#ifndef _FOOD_H_

#define _FOOD_H_

#include <string>
#include <iostream>

class Food
{
private:
	std::string _name;
	float _condition;
	float _price;
	float _weight;
public:
	Food() : _name(""), _condition(0.0), _price(0.0), _weight(0.0) {}
	Food(std::string name, float price, float weight);
	std::string GetName() const { return _name; }
	virtual void ShowData();

};

class Bread : public Food
{
private:
	std::string _typeOfBread;

public:
	Bread() : Food(), _typeOfBread("") {}
	Bread(std::string name, float price, float weight, std::string typeOfBread);
	void ShowData() override;
	
};

class Milk : public Food
{
private:
	int _fatPeercent;

public:
	Milk() : Food(), _fatPeercent(0) {}
	Milk(std::string name, float price, float weight, int fatOfMilk);
	void ShowData() override;

};



#endif