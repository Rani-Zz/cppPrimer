#include<iostream>
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>
using namespace std;
void elimDups(vector<string> &s)
{
	sort(s.begin(), s.end());
	auto it = unique(s.begin(), s.end());
	s.erase(it, s.end());

	vector<string>::iterator begin = s.begin();
	while (begin != s.end())
	{
		cout << *begin << " ";
		begin++;
	}
	cout << endl;
	return;
}
bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}
int main(int argc,char *argv[])
{
	vector<string> v = { "I","like","rainy","but","I","hate","windy","and","want","to","be", "still","lonely" };
	elimDups(v);
	stable_sort(v.begin(), v.end(), isShorter);
	for (auto &s : v)
	{
		cout << s << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}