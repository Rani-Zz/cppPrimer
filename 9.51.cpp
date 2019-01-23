#include<iostream>
#include<string>
using namespace std;
class Date
{
public:
	int y, m, d;
	Date(string s);
	void show()
	{
		cout << y << "," << m << "," << d<<endl;
	}
};
Date::Date(string s)
{
	string month;
	int flag = 0 ,pos;
	if ((pos = s.find_first_of("/")) != string::npos)
	{
		flag = 1;
	}
	if ((pos = s.find_first_of(",") != string::npos))
	{
		flag = 2;
	}
	switch (flag)
	{
	case 1:
		d = stoi(s.substr(0, s.find_first_of("/")));
		s.erase(0, s.find_first_of("/")+1);
		m = stoi(s.substr(0, s.find_first_of("/")));
		s.erase(0, s.find_first_of("/") + 1);
		y = stoi(s);
		break;
	case 2:
		month = s.substr(0, s.find_first_of(" "));
		if (month == "January") m = 1;
		if (month == "Februry") m = 2;
		if (month == "March") m = 3;
		if (month == "April") m = 4;
		if (month == "May") m = 5;
		if (month == "June") m = 6;
		if (month == "July") m = 7;
		if (month == "August") m = 8;
		if (month == "September") m = 9;
		if (month == "October") m = 10;
		if (month == "November") m = 11;
		if (month == "December") m = 12;
		s.erase(0,s.find_first_of(" ")+ 1);
		d = stoi(s.substr(0, s.find_first_of(",")));
		s.erase(0, s.find_first_of(",") + 1);
		y = stoi(s);
		break;
	case 0:
		month = s.substr(0, s.find_first_of(" "));
		if (month == "Jan") m = 1;
		if (month == "Feb") m = 2;
		if (month == "Mar") m = 3;
		if (month == "Apr") m = 4;
		if (month == "May") m = 5;
		if (month == "Jun") m = 6;
		if (month == "Jul") m = 7;
		if (month == "Aug") m = 8;
		if (month == "Sep") m = 9;
		if (month == "Oct") m = 10;
		if (month == "Nov") m = 11;
		if (month == "Dec") m = 12;
		s.erase(0, s.find_first_of(" ") + 1);
		d = stoi(s.substr(0, s.find_first_of(" ")));
		s.erase(0, s.find_first_of(" ") + 1);
		y = stoi(s);

	}
}

int main(int argc,char *argv[])
{
	Date dat1("1/1/1991");
	dat1.show();
	Date dat2("January 1,1991");
	dat2.show();
	Date dat3("Jan 1 1991");
	dat3.show();
	system("pause");
	return 0;
}