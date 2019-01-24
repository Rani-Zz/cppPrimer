#include<iostream>
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>

#include "my_Sales_item.h"
using namespace std;
bool isShorter(my_Sales_item s1, my_Sales_item s2)
{
	return s1.isbn().size() < s2.isbn().size();
}
void compareIsbn(vector<my_Sales_item> &v)
{
	stable_sort(v.begin(), v.end(), isShorter);
	return;
}
int main(int argc,char *argv[])
{
	my_Sales_item m1("beacuse"), m2("my");
	vector<my_Sales_item> vec = { m1,m2 };
	cout << "排序前：" << endl;
	for (auto &v : vec)
	{
		cout << v.isbn() << endl;
	}
	cout << endl;
	compareIsbn(vec);
	for (auto &v : vec)
	{
		cout << v.isbn() << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}