#include<iostream>
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>
#include "my_Sales_item.h"

using namespace std;
//我还是没有懂这个lambda的意义是什么
void compareIsbn(vector<my_Sales_item> &v)
{
	stable_sort(v.begin(), v.end(), [](my_Sales_item s1, my_Sales_item s2) {return s1.isbn().size() < s2.isbn().size(); });
	return;
}
int main(int argc,char *argv[])
{
	my_Sales_item s1("hate"), s2("you");
	vector<my_Sales_item> vec{ s1,s2 };
	cout << "排序前：" << endl;
	for (auto &v : vec)
	{
		cout << v.isbn() << endl;
	}
	cout << endl;
	compareIsbn(vec);
	cout << "排序后:" << endl;
	for (auto &v : vec)
	{
		cout << v.isbn() << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}