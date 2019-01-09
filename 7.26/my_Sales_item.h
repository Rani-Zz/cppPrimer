#pragma once
#include<iostream>
#include<string>
using namespace std;
class my_Sales_item
{
public:
	my_Sales_item() = default;
	my_Sales_item(const string &s):bookNo(s){}
	my_Sales_item(const string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) {}
	my_Sales_item(istream &);
	~my_Sales_item();

	string isbn() const { return bookNo; }
	my_Sales_item& combine(const my_Sales_item&);
	double avg_price() const;
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
inline double my_Sales_item::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}

