#include<iostream>
using namespace std;
int main()
{	int v1,v2;
	cout<< "输入两个整数:" << endl;
	cin >> v1 >> v2;

	//为什么我没有想到这个判断
	if(v1 <= v2)
	{
		int i = v1;
		while (i >= v1 && i <= v2)
		{
			cout << i << " ";
			i++;
		}
		cout << endl;
	}
	else
	{
		int i = v2;
		while (i >= v2 && i <= v1)
		{
			cout << i << " ";
			i++;
		}
		cout << endl;

	}
	
	system("pause");
	return 0;
}