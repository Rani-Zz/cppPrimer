istream& func(istream& is)
{
	string s;
	while(is>>s)
	{ 
		cout << s << endl;
	}
	is.clear();
	return is;
}