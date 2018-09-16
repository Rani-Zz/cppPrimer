#include<iostream>
using namespace std;
int main()
{
	int i = 50;
	int sum = 0;
	while (i <= 100)
	{
		sum += i;
		i++;
	}
	cout << "50到100的整数相加得" << sum << endl;

	return 0;
}