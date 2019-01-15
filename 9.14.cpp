#include<iostream>
#include<string>
#include<vector>
#include<list>


using namespace std;
int main(int argc,char *argv[])
{   
	list<const char*> li;
	vector<string> vec;
	vec.assign(li.cbegin(), li.cend());
	system("pause");
	return 0;
}