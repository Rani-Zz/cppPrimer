#include<iostream>
#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;
int main()
{   

	string s, temp;
	temp = s;
	int count = 1;
	while (cin >> s)
	{
		if (s == temp)
		{
			++count;
			break;
		}
		else {
			temp = s;
			count = 1;
		}
	}
	if(count>1)
	{ 
		cout << temp << endl;
	}
	else {
		cout << "没有重复的单词" << endl;
	}
	return 0;
}