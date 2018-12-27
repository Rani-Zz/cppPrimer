#include<iostream>
#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;

int fun(int n)
{
	return abs(n);
}

int main()
{   
	int a;
	cout << "请输入一个数字:";
	cin >> a;
	cout << a << "的绝对值为：" << fun(a) << endl;
	system("pause");
	return 0;
}