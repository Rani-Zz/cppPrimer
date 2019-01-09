#include "Person.h"


//Person::Person(string Client_name, string Client_address) :name(Client_name), address(Client_address) {};


Person::~Person()
{
}

istream &read(istream &is, Person &p)
{
	is >> p.name >> p.address;
	return is;
}

ostream &print(ostream &os,const Person &p)
{
	os << p.name << "'s" << " address is " << p.address;
	return os;
}
