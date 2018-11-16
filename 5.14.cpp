#include<iostream>
#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;
int main()
{   
	string s, temp,maxtemp;
	int count = 0, maxcount = 0;
	cin >> s;
	temp = maxtemp = s;
	++count;
	while (cin >> s)
	{
		if (temp == s)
			++count;
		else
		{
			if (count > maxcount)
			{
				maxtemp = temp;
				maxcount = count;
			}
			temp = s;
			count = 1;
		}
	}
	if (maxcount == 1)
	{
		cout << "没有重复字符" << endl;
	}
	else 
	{
		cout << maxtemp << " " << maxcount << endl;
	}
	return0;
}