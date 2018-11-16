#include<iostream>
#include<string>
#include "Sales_item.h"
using namespace std;
int main()
{   
	string str;
	cin >> str;
	for (auto &c : str)
		c = 'X';
	cout << str << endl;
	return 0;
}