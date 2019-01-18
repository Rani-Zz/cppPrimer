#include<iostream>
#include<vector>


using namespace std;
int main(int argc,char *argv[])
{   
	vector<int> vec1 = {1,2,3}, vec2 = {1,2,3};
	if (vec1.size() == vec2.size())
	{
		vector<int>::iterator b1 = vec1.begin(), b2 = vec2.begin();
		for (b1, b2; b1 != vec1.end(); b1++, b2++)
		{
			if (*b1 != *b2)
			{
				cout << "不等" << endl;
				break;
			}
		}
		cout << "相等" << endl;
	}
	else
	{
		cout << "不等" << endl;
	}
	system("pause");
	return 0;
}