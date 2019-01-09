#pragma once
#include<string>
using namespace std;
class Screen
{
public:
	typedef string::size_type pos;
	//using pos = string::size_type;
	Screen() = default;
	Screen(pos h, pos w) :height(h), width(w), contents(h*w,' '){}
	Screen(pos h, pos w,char c) :height(h), width(w), contents(h*w,c) {}

	~Screen();
private:
	pos height, width;
	string contents;
};

