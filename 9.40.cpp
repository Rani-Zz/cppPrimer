#include<iostream>
#include<string>
#include<vector>

using namespace std;

void func(int n)
{
	vector<string> svec;
	svec.reserve(1024);
	string word = "string";
	for (int i = 0; i < n; i++)
	{
		svec.push_back(word);
	}
	svec.resize(svec.size() + svec.size() / 2);
	cout << "size:" << svec.size() << endl;
	cout << "capacity:" << svec.capacity() << endl;
}
int main(int argc,char *argv[])
{
	func(256);
	func(512);
	func(1000);
	func(1048);
	system("pause");
	return 0;
}