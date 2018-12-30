#include<iostream>

#include<vector>
using namespace std;

void fun(vector<int> vec,int i)
{
	if (i == 0)
		cout << vec[i] << endl;
	else
	{		
		fun(vec,i-1);
		cout << vec[i] << endl;
		
	}
		
}
int main(int argc,char *argv[])
{   
	vector<int> vec{ 1,2,3,4,5 };
	fun(vec,vec.size()-1);
	system("pause");
	return 0;
}