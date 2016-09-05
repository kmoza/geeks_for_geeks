#include<iostream>

using namespace std;

template<int N>
class PrintOneToN
{
	public:
		static void print()
		{
			PrintOneToN<N-1>::print();
			cout << N << endl;
		}
};

template<>
class PrintOnetoN<1>
{
	public:
		static void print()
		{
			cout << 1 << endl;
		}
};

int main()
{
	const int N = 10;
	PrintOneToN<N>::print();
	return 0;
}
