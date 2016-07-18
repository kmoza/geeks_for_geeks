#include<iostream>

class Test
{
	private:
		~Test()
		{
		}

		friend void destructorTest(Test* t);
};

void destructorTest(Test* t)
{
	delete t;
}

int main()
{
	Test *ptr = new Test;
	destructorTest(ptr);
	return 0;
}
