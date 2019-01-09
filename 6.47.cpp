#include<iostream>
#include<vector>
using namespace std;
void fun(vector<int> vec, int n)
{
#ifndef NDEBUG
	cout << vec.size() << endl;
#endif // !NDEBUG

	if (n == 0)
		cout << vec[n] << endl;
	else
	{
		fun(vec, n - 1);
		cout << vec[n] << endl;
	}
}
int main(int argc,char *argv[])
{   
	vector<int> vec{ 1,2,3,4,5 };
	fun(vec, vec.size() - 1);
	system("pause");
	return 0;
}