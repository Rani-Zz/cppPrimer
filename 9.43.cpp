#include<iostream>
#include<string>
using namespace std;
void func(string &s, string oldVal, string newVal)
{
	int size = oldVal.size();
	string::iterator it1 = s.begin();
	string::iterator it2 = newVal.begin();
	string::iterator it3 = newVal.end();

	for (it1; it1 < s.end() - size; it1++)
	{
		if (s.substr(it1 - s.begin(), size) == oldVal) //迭代器相减得到pos
		{
			it1 = s.erase(it1,it1+size);
			it1 = s.insert(it1, it2, it3);
			advance(it1, newVal.size());
		}
	}
}
int main(int argc,char *argv[])
{

	string s = "abdfgs";
	string s1 = "bd";
	string s2 = "bad";
	func(s, s1, s2);
	cout << s << endl;
	system("pause");
	return 0;
}