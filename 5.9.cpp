#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;
int main()
{   
	char c;
	int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0;
	while (cin >> c)
	{
		if (c == 'a')
			++acnt;
		if (c == 'e')
			++ecnt;
		if (c == 'i')
			++icnt;
		if (c == 'o')
			++ocnt;
		if (c == 'u')
			++ucnt;
	}

	cout << "conut a:" << acnt << endl;
	cout << "count e:" << ecnt << endl;
	cout << "count i:" << icnt << endl;
	cout << "count o:" << ocnt << endl;
	cout << "count u:" << ucnt << endl;
		return 0;
}