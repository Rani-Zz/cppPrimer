#include<iostream>
#include<string>
#include<vector>
#include "Sales_item.h"
using namespace std;
int main()
{   
	int a, b;
	while (cin >> a >> b)
	{
		try {
			if (b == 0)
				throw runtime_error("被除数不能为0");
		}catch(runtime_error err)
		{  
			cout << err.what();
			cout << "\n是否需要重新输入 ? Enter y or n : " << endl;
			char c;
			cin >> c;
			if (c == 'n')
				break;
		}
		
	}
	return 0;
}