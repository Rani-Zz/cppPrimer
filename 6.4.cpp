#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;

long fun(int n)
{
	if (n == 1)
		return 1;
	else
		return n * fun(n - 1);
}

int main()
{   
	int a;
	long res;
	cout << "请输入一个数字：";
	cin >> a;
	res = fun(a);
	cout << a << "的阶乘为" << res << endl;
	system("pause");
	return 0;
}