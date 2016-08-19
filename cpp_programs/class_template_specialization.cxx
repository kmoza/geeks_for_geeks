#include<iostream>

using namespace std;

template <class T>
class Test
{
	public:
		Test()
		{
			cout << "general template object" << endl;
		}
};

template <>
class Test <int>
{
	public:
		Test()
		{
			cout << "specialized template object" << endl;
		}
};

int main()
{
	Test<int> a;
	Test<char> b;
	Test<float> c;
	return 0;
}
