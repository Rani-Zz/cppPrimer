#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int main(int argc,char *argv[])
{
	int i = 5;
	auto flag = [&i]()->bool {
		while (i > 0) i--;
		return i == 0 ? true : false; };
	auto f = flag();
	cout << f << endl;
	system("pause");
	return 0;
}