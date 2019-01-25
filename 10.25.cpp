#include<iostream>
#include<functional>
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>
using namespace std;
using namespace std::placeholders;
void elimDups(vector<string> &s)
{
	sort(s.begin(), s.end());
	vector<string>::iterator it;
	it = unique(s.begin(), s.end());
	s.erase(it, s.end());
	return;
}
bool check_size(string s, string::size_type sz)
{
	return s.size() < sz;
}
void beggies(vector<string> &v, vector<string>::size_type sz)
{
	elimDups(v);
	stable_sort(v.begin(), v.end(), [](const string &s1, const string &s2) {return s1.size() < s2.size(); });//按长度排序
	vector<string>::iterator it;
	it = partition(v.begin(), v.end(), bind(check_size,_1,sz));
	while (it != v.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	return;
}
int main(int argc,char *argv[])
{
	vector<string> vec = { "some" ,"people" ,"feel" ,"the" ,"rain","but" ,"others" ,"only" ,"get" ,"wet","get","wet" };
	string::size_type sz = 5;
	beggies(vec, sz);
	system("pause");
	return 0;
}