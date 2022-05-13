//============================================================================
// Name        : src.cpp
// Author      : Zhi Gang Niko Nghiem
// Version     : 0.0.1
// Copyright   : Your copyright notice
// Description : sales taxes problem
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include <regex>
#include "./Headers/product.hpp"
#include "./Headers/category.hpp"
#include "./Headers/tax.hpp"

using namespace std;

Tax t;

vector<Product> shoppingCart;
vector<double> totalAndTax;

void printReceipt(vector<Product> shoppingCart) {
	double total = 0;
	double tax = 0;
	cout << "Your Receipt. Thank you for shopping @ sales-tax-problem-shop!" << endl;
	for(Product p: shoppingCart) {
		cout << "> 1 " << p.getName() << ": " << p.getPrice() << endl;
		total += p.getPrice();
		tax += t.getTax(p);
	}
	cout << "> Sales Taxes: " << tax << endl;
	cout << "> Total: " << total << endl;
}

bool isNumberForEnum(string s) {
	regex e("^([0-3])$");
	if (regex_match(s, e)) return true;
	else
	{
		cout << "Your Input is not a number from 0-3" << endl;
		return false;
	}
}

bool isDouble(string sd) {
	regex ed("^(-?)(0|([1-9][0-9]*))(\\.[0-9]+)?$");
	if (regex_match(sd, ed)) return true;
	else
	{
		cout << "Your Input is not a valid number" << endl;
		return false;
	}
}

int main() {
	string name;
	string importedProduct = "imported ";
	string categoryInput;
	bool imported;
	char choice;
	Category category;
	string priceInput;
	double price;
	char quit;

	cout << "Welcome to the sales-tax-problem-shop!" << endl;
	while(true)
	{
		cout << "Please enter the product you want to add to your shoppingcart" << endl;
		cout << "What's the name of your product?" << endl;
		// User enters name for product, use of getline to ensure space
		getline(cin, name);
		// User chooses if its imported
		cout << "Is it imported? [y/n]" << endl;
		do
		{
			cin >> choice;
		}
		while( !cin.fail() && choice!='y' && choice!='n' );
		if(choice == 'y')
		{
			name.insert(0, importedProduct);
			imported = true;
		}
		if(choice == 'n') imported = false;
		// User chooses category for product
		cout << "Choose a category" << endl;
		cout << "Enter a number from 0 - 3" << endl;
		cout << "Common = 0, Books = 1, Food = 2, Medical = 3" << endl;
		do
		{
			cin >> categoryInput;
		}
		while( !cin.fail() && !isNumberForEnum(categoryInput));
		category = static_cast<Category>(stoi(categoryInput));
		// User enters price of the product
		cout << "Enter the price of your product" << endl;
		do
		{
			cin >> priceInput;
		}
		while( !cin.fail() && !isDouble(priceInput));
		price = stod(priceInput);
		Product p(name, imported, price, category);
		shoppingCart.push_back(p);

		cout << "if you want to quit press 'q' and your receipt will be printed" << endl;
		cout << "if you want to add more products then press any other button" << endl;
		cin >> ws >> quit;
		if (quit == 'q') break;
	}
	printReceipt(shoppingCart);

	return 0;
}
