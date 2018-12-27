#include<iostream>
#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;
int main()
{   
	vector<int> vec{ 1,2,3,4,5,6 };
	for (auto &i : vec)
	{
		i = i % 2 == 0 ? i * 2 : i;
	}
	for (auto it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}