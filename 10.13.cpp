#include<iostream>
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>

using namespace std;
bool is(const string &s)
{
	return s.size() < 5;
}
int main(int argc,char *argv[])
{
	vector<string> vec = { "some","people","feel","the","rain","others","just","get","wet" };
	vector<string>::iterator it;
	it = partition(vec.begin(), vec.end(), is);
	while (it != vec.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	system("pause");
	return 0;
}