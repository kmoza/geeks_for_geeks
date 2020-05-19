#include<iostream>
#include<cstring>

using namespace std;

class String
{
	public:
		char *s;
		int size;

	public:
		String(const char*str = NULL);

		~String()
		{
			delete []s;
		}

		String(const String&); //copy constructor

		void print()
		{
			cout << s <<  endl;
		}

		void change(const char*); // function to change

};

String::String(const char* str)
{
	size = strlen(str);
	s = new char[size+1];
	strcpy(s,str);
}


void String::change(const char* str)
{
	delete []s;
	size = strlen(str);
	s = new char[size+1];
	strcpy(s,str);
}


//copy constructor implementation
String::String(const String& old_str)
{
	size = old_str.size;
	s = new char[size+1];
	strcpy(s, old_str.s);
}

int main()
{
	String str1("GeeksQuiz");
	String str2 = str1;

	str1.print();
	str2.print();

	str2.change("GeeksForGeeks");

	str1.print();
	str2.print();
	return 0;
}

