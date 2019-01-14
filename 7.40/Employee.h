#pragma once
#include<iostream>
#include<string>
using namespace std;
class Employee
{
public:
	Employee() = default;
	Employee(string n, string a, int ag) :name(n), address(a), age(ag) {}
	~Employee();
	void show()
	{
		cout << "name:" << name << "\n";
		cout << "age:" << age << "\n";
		cout << "address:" << address << "\n";
		cout << "company:" << company << "\n";
	}
	string company = " alibabagroup ";
	string name, address;
	int age;
};

