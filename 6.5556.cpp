#include<iostream>
#include<string>
#include<vector>

using namespace std;
int add(int a, int b)
{
	return a + b;
}
int substract(int a, int b)
{
	return a - b;
}
int multiply(int a, int b)
{
	return a * b;
}
int divide(int a, int b)
{
	return b != 0 ? a / b : 0;
}
int main(int argc,char *argv[])
{   
	typedef int(*p)(int, int);
	vector<p> vec{ add,substract,multiply,divide };
	for (auto f : vec)
	{
		cout << f(2, 2) << endl;
	}
	system("pause");
	return 0;
}