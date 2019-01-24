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
	return;
}
void beggies(vector<string> &v,vector<string>::size_type sz)
{
	elimDups(v);	//按字典序排序，删除重复
	stable_sort(v.begin(), v.end(), [](const string &s1, const string &s2) {return s1.size() < s2.size(); });//按长度排序
	vector<string>::iterator it;
	it = partition(v.begin(), v.end(), [sz](const string &s) {return s.size() < sz; });	//返回长度大于sz的迭代器
	while (it != v.end())//打印
	{
		cout << *it << endl;
		it++;
	}
	return;
}
int main(int argc,char *argv[])
{
	vector<string> vec = { "some" ,"people" ,"feel" ,"the" ,"rain","but" ,"others" ,"only" ,"get" ,"wet" };
	vector<string>::size_type sz = 5;
	beggies(vec,sz);
	     
	system("pause");
	return 0;
}