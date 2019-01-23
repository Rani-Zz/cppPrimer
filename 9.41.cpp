#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(int argc,char *argv[])
{
	vector<char> vec(5, 'a');
	string s(vec.begin(),vec.end());//还没有学到这个方法
	cout << s << endl;	
    system("pause");
	return 0;
}