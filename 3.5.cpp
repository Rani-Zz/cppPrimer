#include<iostream>
#include<string>

using namespace std;
int main()
{   
	//输入的字符串连接起来
	string s;
	string link;
	string linkwithblank;
	while (getline(cin, s))
	{
		link += s;
		cout << link << endl;

		linkwithblank = linkwithblank + s + " ";
		cout << linkwithblank << endl;
	}
	return 0;
}