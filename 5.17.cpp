#include<iostream>
#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;
int main()
{   
	vector<int> vec1{ 0,1,1,2 };
	vector<int> vec2{ 0,1,1,2,3,5,8 };
	int minsz = vec1.size() < vec2.size() ? vec1.size() : vec2.size();
	for (int i = 0; i < minsz; ++i)
	{
		if (vec1[i] != vec2[i])
		{
			cout << "false" << endl;
			return 0;
		}
	}
	cout << "true" << endl;
	return 0;
}