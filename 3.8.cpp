#include<iostream>
#include<string>
#include "Sales_item.h"
using namespace std;
int main()
{   
	string str;
	cin >> str;
	decltype(str.size())  i = 0;
	while (i < str.size())
	{
		str[i++] = 'X';
	}
	cout << str << endl;
	return 0;
}