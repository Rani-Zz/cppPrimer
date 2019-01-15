#include<iostream>
#include<vector>


using namespace std;

bool func(vector<int>::iterator begin,vector<int>::iterator end, int i)
{
	while (begin != end)
	{
		if (*begin == i)
		{
			return true;
		}
		else begin++;
	}
	return false;
}
int main(int argc,char *argv[])
{   
	vector<int> vec{1,2,3,4,5,6,7,8,9};
	cout << func(vec.begin(), vec.end(), 0) << endl;
	
	system("pause");
	return 0;
}