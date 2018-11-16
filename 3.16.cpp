#include<iostream>
#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;
int main()
{   

	vector<int> v5{ 10, 42 };
	for (auto i : v5)
		cout << i<<endl;
	return 0;
}