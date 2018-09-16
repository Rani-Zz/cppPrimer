#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	for (int val = 50; val <= 100; val++)
	{
		sum += val;
	}
	cout << sum << endl;

	for (int val = 10; val >= 0; val--)
	{
		cout << val << " ";
	}
	cout << endl;

	int v1, v2;
	cout << "请输入两个整数" << endl;
	cin >> v1 >> v2;
	if (v1 < v2)
	{
		for (int val = v1; val <= v2; val++)
		{
			cout << val << " ";
		}
	}
	else {
		for (int val = v2; val <= v1; val++)
		{
			cout << val << " ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}