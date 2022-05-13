//product header file
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include "category.hpp"

using namespace std;

class Product
{
private:
	string name;
	bool imported;
	double price;
	Category category;

public:
	Product(string name, bool imported, double price, Category category);
	bool isImported()
	{
		return imported;
	};
	double getPrice()
	{
		return price;
	};
	string getName()
	{
		return name;
	}
	Category getCategory()
	{
		return category;
	};
};

#endif
