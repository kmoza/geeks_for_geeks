#include<iostream>
#include<cstring>

using namespace std;

class String
{
	private:
		char *p;
		int len;

	public:
		String(const char* a);
};

String::String(const char* a)
{
	int length = strlen(a);
	p = new char[length+1];
	strcpy(p,a);
	cout << "constructor called" << endl;
}

int main()
{
	String s1("Geeks");
	const char *name = "forGeeks";
	s1 = name;
	return 0;
}
