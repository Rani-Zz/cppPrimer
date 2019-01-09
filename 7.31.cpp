class X;
class Y
{
	X obj;//X只声明未定义，所以Y里面不能创建X的对象,这样写不能通过编译
};
class X
{
	Y *p;
};