// implementation of tax
#include <iostream>
#include <cmath>
#include "../Headers/tax.hpp"
#include "../Headers/Category.hpp"
#include "../Headers/product.hpp"

using namespace std;

double Tax::round(double value)
{
	return ceil(value*20)/20;
}

double Tax::getTax(Product product)
{
	double result = 0;
	if(product.isImported())
	{
		result += round((product.getPrice() * Tax::IMPORT_TAX_RATE));
	}

	if(product.getCategory() == Category::Common)
	{
		result += round((product.getPrice() * Tax::BASIC_TAX_RATE));
	}
	return result;
}
