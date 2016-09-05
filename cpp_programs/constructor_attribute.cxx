#include<iostream>

using namespace std;

void myStartupFun(void) __attribute__((constructor));

void myStartupFun(void)
{
	cout << "geeks for geeks" << endl;
}

int main()
{
	return 0;
}
