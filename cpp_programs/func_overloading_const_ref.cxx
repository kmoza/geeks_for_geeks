#include<iostream>

using namespace std;

void fun(const int &i)
{
	cout << "fun (const int &) called" << endl;
}

void fun(int& i)
{
	cout << "fun(int &) called" << endl;
}

int main()
{
	const int i = 10;
	fun(i);
	fun(20);
	return 0;
}
