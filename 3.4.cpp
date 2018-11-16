#include<iostream>
#include<string>
using namespace std;
int main()
{   

	string s1, s2;
	cin >> s1 >> s2;
	//字符大小比较
	//if (s1 == s2)
	//	cout << "相等" << endl;
	//else if (s1 > s2)
	//	cout << s1 << endl;
	//else cout << s2 << endl;
	//字符串长度比较
	if (s1.size() != s2.size())
	{
		cout << (s1.size() > s2.size() ? s1 : s2) << endl;
	}
	return 0;
}