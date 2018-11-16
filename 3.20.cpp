#include<iostream>
#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;
int main()
{   
	vector<int> ivec;
	int i;
	while (cin >> i)
	{
		ivec.push_back(i);
	}
	for (int m = 0; m < ivec.size()-1; m++)
	{
		cout << ivec[m] + ivec[m + 1] << endl;
	}

	decltype(ivec.size()) n = ivec.size()-1;
	for (int m = 0; m <ivec.size() / 2; m++,n--)
	{
		cout << ivec[m] + ivec[n] << endl;
	}
	return 0;
}