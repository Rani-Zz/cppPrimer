#include<iostream>
#include<string>
#include<list>

using namespace std;
int main(int argc,char *argv[])
{   
	string s;
	list<string> deq;
	while (cin >> s)
	{
		deq.push_back(s);
	}
	list<string>::iterator begin = deq.begin();
	for (begin; begin != deq.end(); begin++)
	{
		cout << *begin;
	}
	cout << endl;
	system("pause");
	return 0;
}