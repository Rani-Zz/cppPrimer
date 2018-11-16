#include<iostream>
#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;
int main()
{   
	vector<string> ivec;
	string str;
	while (cin >> str)
	{
		ivec.push_back(str);
	}
	for (int i = 0; i < ivec.size(); i++)
	{
		for (int j = 0; j < ivec[i].size(); j++)
		{
			ivec[i][j] = toupper(ivec[i][j]);
		}
	}

	for (auto s : ivec)
	{
		cout << s << endl;
	}
	return 0;
}