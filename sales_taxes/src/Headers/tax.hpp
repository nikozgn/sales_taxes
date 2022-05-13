//tax header file
#ifndef TAX_H
#define TAX_H

#include <string>
#include "category.hpp"
#include "product.hpp"

using namespace std;

class Tax
{
private:
	const double BASIC_TAX_RATE = 0.1;
	const double IMPORT_TAX_RATE = 0.05;
	double round(double value);
public:
	double getTax(Product product);
	double getBasicTaxRate();
	double getImportTaxRate();
};

#endif
