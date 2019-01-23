#include<iostream>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
	vector<string> vec(5, "10");
	int sum1 =0 ;
	double sum2 = 0.0;
	 vector<string>::iterator  begin = vec.begin();
	 while (begin != vec.end())
	 {
		 sum1 += stoi(*begin);
		 sum2 += stod(*begin);
		 begin++;
	 }
	 cout << sum1 << endl;
	 cout << sum2 << endl;
	      
	system("pause");
	return 0;
}