#include<iostream>
#include<string>
#include<cctype>

using namespace std;
int containUpper(const string &s)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (isupper(s[i]))
		{
			return 1;
		}
	}
	return 0;
}
void toLower(string &s)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (isupper(s[i]))
		{
			s[i] = tolower(s[i]);
		}
	}
}
int main()
{   
	string s;
	cin >> s;
	cout << containUpper(s)<< "\n";
	toLower(s);
	cout << s << endl;
	system("pause");
	return 0;
}