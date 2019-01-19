#include<iostream>
#include<vector>
#include<list>


using namespace std;
int main(int argc,char *argv[])
{  
	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	vector<int> vec;
	list<int> li;
	for (auto a : ia)
	{
		vec.push_back(a);
		li.push_back(a);
	}
	vector<int>::iterator it1 = vec.begin();
	list<int>::iterator it2 = li.begin();
	while (it1 != vec.end())
	{
		if (*it1 % 2 == 0)
			it1 = vec.erase(it1);
		else
			it1++;
	}
	while (it2 != li.end())
	{
		if (*it2 % 2 != 0)
			it2 = li.erase(it2);
		else
			it2++;
	}
	vector<int>::iterator it3 = vec.begin();
	list<int>::iterator it4 = li.begin();
	while (it3 != vec.end())
	{
		cout << *it3 << " ";
		it3++;
	}
	cout << endl;
	while (it4 != li.end())
	{
		cout << *it4 << " ";
		it4++;
	}
	cout << endl;
	
	system("pause");
	return 0;
}