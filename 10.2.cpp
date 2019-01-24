#include<iostream>
#include<algorithm>
#include<string>
#include<list>

using namespace std;
int main(int argc,char *argv[])
{
	list<string> lis = { "abc","dev","dfg","dfh","abc" };
	auto result = count(lis.begin(), lis.end(), "abc");
	cout << result << endl;
    system("pause");
	return 0;
}