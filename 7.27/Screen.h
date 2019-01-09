#pragma once
#include<iostream>
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
	Screen &set(char);
	Screen &set(pos, pos, char);
	Screen &move(pos r, pos c);
	Screen &display(ostream &os)
	{
		do_display(os); return *this;
	}
private:
	void do_display(ostream &os) const
	{
		os<<contents;
	}
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
};
inline Screen  &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r, pos col, char c)
{
	contents[r*width + col] = c;
	return *this;
}
inline Screen &Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

