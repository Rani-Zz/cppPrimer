#include<iostream>
#include<vector>
#include<list>

using namespace std;
int main(int argc,char *argv[])
{   
	list<int> li = { 1,2,3 };
	vector<int> vec1 = { 1,1,1 };
	vector<double> vec2(li.begin(), li.end());
	vector<double> vec3(vec1.begin(), vec1.end());
	vector<double>::iterator begin = vec2.begin(),begin2 = vec3.begin();
	while (begin != vec2.end())
	{
		cout << *begin << endl;
		begin++;
	}
	while (begin2 != vec3.end())
	{
		cout << *begin2 << endl;
		begin2++;
	}
	system("pause");
	return 0;
}