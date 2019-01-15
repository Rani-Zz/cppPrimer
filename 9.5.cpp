#include<iostream>
#include<vector>


using namespace std;
vector<int>::iterator func(vector<int>::iterator begin, vector<int>::iterator end, int i)
{
	while (begin != end)
	{
		if (*begin == i)
		{
			return begin;
		}
		else begin++;
	}
	return begin;
}
int main(int argc,char *argv[])
{   
	vector<int> vec{1,2,3,4,5,6,7,8,9};
	if (func(vec.begin(), vec.end(), 3) != vec.end())
	{
		cout << "find it" << endl;
	}
	else {
		cout << "sorry" << endl;
	}
	system("pause");
	return 0;
}