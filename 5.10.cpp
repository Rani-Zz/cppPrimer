#include<iostream>
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
		switch(c) {
		case 'a':
		case 'A':
			acnt++;
			break;
		case 'e':
		case 'E':
			ecnt++;
			break;
		case 'i':
		case 'I':
			icnt++;
			break;
		case 'o':
		case 'O':
			ocnt++;
			break;
		case 'u':
		case 'U':
			ucnt++;
			break;
		}
	}

	cout << "conut a:" << acnt << endl;
	cout << "count e:" << ecnt << endl;
	cout << "count i:" << icnt << endl;
	cout << "count o:" << ocnt << endl;
	cout << "count u:" << ucnt << endl;
	
	return 0;
}