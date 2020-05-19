#include<iostream>

class Test
{
	public:
		Test()
		{
			std::cout << "constructor called" << std::endl;
		}

		~Test()
		{
			std::cout << "desctructor called" << std::endl;
		}

};

void myfunc()
{
	static Test obj;
}

int main()
{
	std::cout << "main started" << std::endl;
	myfunc();
	std::cout << "main over" << std::endl;
	return 0;
}
