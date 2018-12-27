#include<iostream>
#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;
size_t count_calls()
{
	static size_t ctr = 0;
	return ctr++;
}

int main()
{   
	for (int i = 0; i < 5; i++)
	{
		cout << count_calls() << "\n";
	}
	cout << endl;
	system("pause");
	return 0;
}