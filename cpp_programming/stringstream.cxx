#include<string>
#include<sstream>
#include<iostream>


int main()
{
	std::stringstream ss;
	int val = 10;
	ss << val;
	ss << "x";

	//std::string temp1(val);
	std::string temp2(ss.str());

	//std::cout << "string 1 = " << temp1 << std::endl;
	std::cout << "string 2 = " << temp2 << std::endl;

	return 0;
}
