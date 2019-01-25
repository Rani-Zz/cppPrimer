#include<iostream>
#include<functional>
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>
using namespace std;
using namespace std::placeholders;
bool check_size(int a, string::size_type sz)
{
	return a > sz;
}
int main(int argc,char *argv[])
{
	string s = "Autumn Leaves";
	string::size_type sz = s.size();
	vector<int> vec{1,2,5,9,10,15,4,20};
	vector<int>::iterator it;
	it = find_if(vec.begin(), vec.end(), bind(check_size,_1,sz));
	cout << *it << endl;
	system("pause");
	return 0;
}

