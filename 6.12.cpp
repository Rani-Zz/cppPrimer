#include<iostream>
#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;
void reverse(int &val1,int &val2)
{
	int temp = 0;
	temp = val1;
	val1 = val2;
	val2 = temp;
	return;
}
int main()
{   
	int val1, val2;
	cin >> val1 >> val2;
	reverse(val1, val2);
	cout << val1 << " " << val2 << endl;
	system("pause");
	return 0;
}