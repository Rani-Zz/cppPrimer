#include<iostream>
#include<algorithm>
#include<numeric>
#include<string>

using namespace std;

void elimDups(vector<string> &s)
{
	sort(s.begin(), s.end());
	auto it = unique(s.begin(), s.end());
	s.erase(it, s.end());

	vector<string>::iterator begin = s.begin();
	while (begin != s.end())
	{
		cout << *begin << endl;
		begin++;
	}
	return;
}
int main(int argc,char *argv[])
{
	vector<string> v = {"I","like","rainy","but","I","hate","windy"};
	elimDups(v);
	system("pause");
	return 0;
}