#include<iostream>
#include<vector>

using namespace std;
int main(int argc,char *argv[])
{   
	vector<int> vec;
	
	auto v1 = vec.at(0); //报错out_of_range
	auto v2 = vec[0];
	auto v3 = *vec.begin();
	auto v4 = vec.front();

	cout << v1 << " " << v2 << " " << v3 << " " << v4 << endl;
	system("pause");
	return 0;
}