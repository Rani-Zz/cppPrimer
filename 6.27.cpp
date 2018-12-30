#include<iostream>

using namespace std;
int fun(initializer_list<int> li)
{
	int sum = 0;
	for(auto beg = li.begin();beg!=li.end();++beg)
	{
		sum += *beg;
	}
	return sum;
}
int main(int argc,char *argv[])
{   
	initializer_list<int> list{ 1,2,3,4,5,6 };
	cout << fun(list) << endl;
	system("pause");
	return 0;
}