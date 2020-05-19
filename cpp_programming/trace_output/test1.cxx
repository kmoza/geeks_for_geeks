#include<iostream>

class Test
{
	static int i;

	int j;

	public:
		/*int retStatic()
		{
			return i++;
		}
		*/
};

//int Test::i = 10;

int main()
{
	std::cout << sizeof(Test) << std::endl;
	Test t;
	//std::cout << t.retStatic() << std::endl;
	return 0;
}
