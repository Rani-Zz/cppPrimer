using namespace std;

class NoDefault
{
public:
	NoDefault(int);
};
class C
{
	C() = default;
	NoDefault n;
};