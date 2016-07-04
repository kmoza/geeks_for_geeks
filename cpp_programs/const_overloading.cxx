#include<iostream>

using namespace std;

int f(int x)
{
	return x+10;
}

int f(const int x)
{
	return x+20;
}

int main()
{
	int x = 10;
	const int y = 20;
	f(x);
	f(y);
	return 0;
}
