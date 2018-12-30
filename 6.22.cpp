#include<iostream>


using namespace std;
void my_swap(int* &a, int* &b)
{
	int* c = NULL;
	c = a;
	a = b;
	b = c;
	return;
}
int main()
{   
	int val1,val2;
	cin >> val1 >> val2;
	int *p1 = &val1, *p2 = &val2;
	cout << *p1 << " " << *p2<<"\n";
	my_swap(p1, p2);
	cout << *p1 << " " << *p2 << endl;
	system("pause");
	return 0;
}