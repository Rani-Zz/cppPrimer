#pragma once
#include<iostream>
#include<string>

using namespace std;

class Person
{
	friend istream &read(istream &is, Person &p);
	friend ostream &print(ostream &os, const Person &p);
public:
	//Person(string Client_name, string Client_address);
	Person() = default;
	~Person();
	Person(const string n, const string add) :name(n), address(add) {}
	void show_info()
	{
		cout << name << "'s" << " address is " << address << endl;
	}

private:
	string name;
	string address;
	
};

