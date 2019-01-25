#include<iostream>
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>

using namespace std;
bool func(const string &s)
{
	return s.size() <= 6;
}
int main(int argc,char *argv[])
{
	vector<string> vec = { "some" ,"people" ,"feel" ,"the" ,"rain","but" ,"others" ,"only" ,"get" ,"wet" };
	cout << count_if(vec.begin(), vec.end(), func) << endl;
	system("pause");
	return 0;
}