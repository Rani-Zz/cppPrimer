#include<iostream>
#include<list>
#include<deque>

using namespace std;
int main(int argc,char *argv[])
{   

	list<int> li(5,7);
	deque<int> deque1, deque2;
	list<int>::iterator it1 = li.begin();


	for (it1; it1 != li.end(); it1++)
	{
		if ((*it1) % 2 == 0)
		{
			deque1.push_back(*it1);
		}
		else
		{
			deque2.push_back(*it1);
		}
	}
	deque<int>::iterator it2 = deque1.begin();//!!!不可以在push_back操作前定义迭代器，因为push_back()会使迭代器失效
	deque<int>::iterator it3 = deque2.begin();

	cout << "偶数为：";
	for (it2; it2 != deque1.end(); it2++)
	{
		cout << *it2 << " ";
	}
	cout << endl;
	cout << "奇数为：";
	for (it3; it3 != deque2.end(); it3++)
	{
		cout << *it3 << " ";
	}
	system("pause");
	return 0;
}