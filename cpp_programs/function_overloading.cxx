#include<iostream>

using namespace std;

void print(int i)
{
	cout << "Here is int" << i << endl;
}

void print(double f)
{
	cout << "Here is double" << f << endl;
}

void print(float f)
{
	cout << "Here is the float " << f << endl;
}

void print(char* c)
{
	cout << "Here is char*" << c << endl;
}

int main()
{
	print(10);
	print(10.10);
	print("ten");
	print(10.12);
	return 0;
}

