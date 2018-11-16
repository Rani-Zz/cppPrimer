#include<iostream>
#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;
int main()
{   

	string s1, s2;
	do
	{
		cout << "输入两个字符串：" << endl;
		cin >> s1 >> s2;
		cout << (s1.size() < s2.size() ? s1 : s2) << endl;
	} while (cin);
	return 0;	
}