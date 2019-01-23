#include<iostream>

#include<forward_list>
using namespace std;
void func(forward_list<string> &flst, string s1, string s2)
{
	auto p = flst.begin();
	while (p != flst.end())
	{
		if (*p == s1)
		{
			flst.insert_after(p, s2);
			break;
		}else p++;
	}
	if (p == flst.end())
	{
		flst.insert_after(p, s2);
	}
	return;

}
int main(int argc,char *argv[])
{  
	forward_list<string> flst = { "asd","bc" };
	func(flst, "asd", "cc");
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