#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<fstream>

using namespace std;
int main(int argc,char *argv[])
{   

	vector<string> vec;
	ifstream in("1.txt");//ifstream定义了一个输入流in(文件流)，它被初始化从文件中读取数据 
	if (in)//检查文件的读取是否成功,养成良好的习惯！
	{
		string buf;
		while (getline(in,buf))
		{
			vec.push_back(buf);
		}
	}
	else
	{
		cout << "couldn't open this file" << endl;
	}

	for (auto line : vec)
	{
		istringstream is(line);//与行绑定
		string word;
		while (is >> word)//读单词
		{
			cout << word << endl;
		}
	}
	system("pause");
	return 0;
}