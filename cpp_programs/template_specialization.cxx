#include<iostream>
using namespace std;

template <class T>
void fun(T a)
{
	cout << "the main template function" << a << endl;
}

template<>
void fun(int a)
{
	cout << "specialized template fun for int" << a << endl;
}

int main()
{
	fun<char>('a');
	fun<int>(10);
	fun<float>(10.14);
	return 0;
}
