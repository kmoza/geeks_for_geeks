#include<iostream>
#include<cstring>

using namespace std;

class String
{
	public:
		char *s;
		int size;

	public:
		String(char*);
		~String();

};


String::String(char*c)
{
	cout << "constructor called" << endl;
	size = strlen(c);
	s = new char[size+1];
	strcpy(s,c);
}

String::~String()
{
	cout << "desctructor called" <<  endl;
	delete []s;
}

int main()
{
	String s("data");
	return 0;
}
