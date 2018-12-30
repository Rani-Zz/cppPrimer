#include<iostream>
#include<string>

using namespace std;
string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}
int main(int argc,char *argv[])
{   
	cout << make_plural(1, "success", "es") << " " << make_plural(2, "success", "es") << endl;
	cout << make_plural(1, "failure") << " " << make_plural(2, "failure") << endl;
	system("pause");
	system("pause");
	return 0;
}