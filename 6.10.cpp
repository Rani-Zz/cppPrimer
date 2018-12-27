#include<iostream>
#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;
void reverse(int *p1, int*p2)
{
	int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << *p1 <<" "<< *p2<<"\n";
}
int main()
{   

	int val1, val2;
	cin >> val1 >> val2;
	reverse(&val1, &val2);
	cout<< val1 << " " << val2 << endl;
	system("pause");
	return 0;
}