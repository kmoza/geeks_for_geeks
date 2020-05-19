#include<iostream>
#include<string>

class Myfunctor
{
	public:
		void operator()(const std::string& str) const;
};

void Myfunctor::operator()(const std::string &str)const
{
	std::cout << str << std::endl;
}

int main()
{
	Myfunctor functor;
	functor("stuck");
	return 0;
}
