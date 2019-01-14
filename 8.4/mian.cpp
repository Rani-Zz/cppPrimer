#include<iostream>
#include<string>
#include<vector>
#include<fstream>
int main(int argc,char *argv[])
{   
	vector<string> vec;
	ifstream in("1.txt");
	if (in)
	{
		string buf;
		while (getline(in, buf))
		{
			vec.push_back(buf);
		}
	}
	else
	{
		cout << "couldn't open this file" << endl;
	}

	for (auto s : vec)
	{
		cout << s << endl;
	}
	system("pause");
	return 0;
}