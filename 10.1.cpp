#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;
int main(int argc,char *argv[])
{
	vector<int> vec = { 1,2,3,5,2,6,3,7,2 };
	auto result1 = count(vec.begin(), vec.end(), 2);
	cout << result1 << endl;
	system("pause");
	return 0;
}