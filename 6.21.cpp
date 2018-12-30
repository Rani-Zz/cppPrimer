#include<iostream>
#include "Sales_item.h"
using namespace std;
int fun(int a, int *b)
{
	if (a > *b)
		return a;
	else return *b;
}
int main()
{   
	int val1, val2;
	cin >> val1 >> val2;
	int *p = &val2;
	cout << fun(val1, p) << endl;
	     
	system("pause");
	return 0;
}