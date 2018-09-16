#include<iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	Sales_item item,curritem;
	if (cin >> curritem)
	{
		int cnt = 1;
		while (cin >> item)
		{			
			if (item.isbn() == curritem.isbn())
				cnt++;
			else
			{
				cout << curritem.isbn() << "有" << cnt << "条销售记录" << endl;
				curritem = item;
				cnt = 1;
			}
		}
		cout << curritem.isbn() << "有" << cnt << "条销售记录" << endl;
	}
	system("pause");
	return 0;
}