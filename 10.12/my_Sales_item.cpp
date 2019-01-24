#include "my_Sales_item.h"
#include<iostream>
#include<string>

istream& read(istream &is, my_Sales_item &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
//my_Sales_item::my_Sales_item()
//{
//}


my_Sales_item::~my_Sales_item()
{
}

my_Sales_item::my_Sales_item(istream &is)
{
	read(is, *this);
}



