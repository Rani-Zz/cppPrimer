#include<iostream>
#include<forward_list>
using namespace std;

int main(int argc,char *argv[])
{  
	forward_list<int> flst = { 1,2,3,2,4,6,5,7,87,44 };
	auto pre = flst.before_begin();
	auto curr = flst.begin();
	while (curr != flst.end())
	{
		if (*curr % 2 != 0)
		{
			curr = flst.erase_after(pre);
		}
		else
		{
			pre = curr;
			++curr;
		}
	}
	auto it = flst.begin();
	while (it != flst.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	system("pause");
	return 0;
}