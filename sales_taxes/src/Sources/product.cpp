// implementation of product
#include <iostream>
#include <string>
#include "../Headers/product.hpp"


Product::Product(string name, bool imported, double price, Category category)
{
	this->name = name;
	this->imported = imported;
	this->price = price;
	this->category  = category;
}

