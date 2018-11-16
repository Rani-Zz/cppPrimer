#include<iostream>
#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;
int main()
{   
	string s, temp;
	int flag = 0;
	temp = s;
	while (cin >> s)
	{
		if (!isupper(s[0]))
			continue;
		 if(s == temp)
		{
			flag = 1;
			break;
		}
		else {
			temp = s;

		}
	}
	if(flag)
	{ 
		cout << temp << endl;
	}
	else {
		cout << "没有重复的单词" << endl;
	}
	
	return 0;
}