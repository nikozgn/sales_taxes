/*#include <iostream>
#include "gtest/gtest.h"
#include "../Headers/product.hpp"
#include "../Headers/category.hpp"
#include "../Headers/tax.hpp"

Tax tax;

TEST(TaxRoundTest, HandlesSuccess)
{
	Product p = Product("music CD", false, 14.99, Category::Common);
	double pTax = tax.getTax(p);
	EXPECT_EQ(pTax, 1.5);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}*/
