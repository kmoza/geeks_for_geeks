#include<iostream>

using namespace std;

template<int n>
struct fib
{
	enum
	{
		val = fib<n-1>::val + fib<n-2>::val
	};
};

template<> 
struct fib<1> 
{
	enum 
	{
		val = 1
	};
};

template<> 
struct fib<0>
{
	enum
	{
		val = 0
	};
};

int main()
{
	cout << fib<8>::val << endl;
	return 0;
}
