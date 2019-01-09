#pragma once
#include<iostream>
#include<string>

using namespace std;

class Person
{
public:
	Person(string Client_name, string Client_address);
	~Person();
	string name;
	string address;
	void show_info()
	{
		cout << name << "'s" << " address is " << address << endl;
	}
};
Person::Person(string Client_name, string Client_address) :name(Client_name), address(Client_address) {};
