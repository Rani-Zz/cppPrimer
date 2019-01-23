#include<iostream>
#include<string>
using namespace std;
void func(string &s, string prefixx, string suffix)
{
	string::iterator ite = s.begin();
	s.insert(0, prefixx);
	s.append(suffix);
}
int main(int argc,char *argv[])
{
	string s = "Rani";
	string pre = "Miss.";
	string suffix = "_Zz";
	func(s, pre, suffix);
	cout << s << endl;
	system("pause");
	return 0;
}