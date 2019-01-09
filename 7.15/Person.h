#pragma once
#include<iostream>
#include<string>

using namespace std;

class Person
{
public:
	//Person(string Client_name, string Client_address);
	Person() = default;
	Person(const string n, const string add) :name(n), address(add) {}
	~Person();
	string name;
	string address;
	void show_info()
	{
		cout << name << "'s" << " address is " << address << endl;
	}

};

