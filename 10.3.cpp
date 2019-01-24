#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int main(int argc,char *argv[])
{
	vector<int> vec = { 1,2,3,4,5,5 };
	int sum = accumulate(vec.cbegin(),vec.cend(),0);
	cout << sum << endl;
	system("pause");
	return 0;
}