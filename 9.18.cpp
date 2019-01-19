#include<iostream>
#include<string>
#include<deque>
using namespace std;
int main(int argc,char *argv[])
{   
	string s;
	deque<string> deq;
	while (cin >> s)
	{
		deq.push_back(s);
	}
	deque<string>::iterator begin = deq.begin();
	for (begin; begin != deq.end(); begin++)
	{
		cout << *begin;
	}
	cout << endl;
	system("pause");
	return 0;
}