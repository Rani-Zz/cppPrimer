#include<iostream>
#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;
int main()
{   
	char c;
	int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0,tcnt=0,scnt=0,ncnt=0;
	while (cin>> std::noskipws>>c)// 此处的std::noskipws表示的是不忽略任何地方的空白（包括制表符和空格等）
	{	
			switch (c) {
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
			case ' ':
				scnt++;
				break;
			case '\t':
				tcnt++;
				break;
			case '\n':
				ncnt++;
				break;

			
		}
	}

	cout << "conut a:" << acnt << endl;
	cout << "count e:" << ecnt << endl;
	cout << "count i:" << icnt << endl;
	cout << "count o:" << ocnt << endl;
	cout << "count u:" << ucnt << endl;
	cout << "count ' ':" << scnt << endl;
	cout << "count \\t:" << tcnt << endl;
	cout << "count \\n:" << ncnt << endl;
		system("pause");
	return 0;
}