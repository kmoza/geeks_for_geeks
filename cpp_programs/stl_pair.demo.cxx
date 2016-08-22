#include<iostream>
#include<utility>
#include<string>

using namespace std;

int main()
{
	pair<string,int> g1;
	pair<string,int> g2("quiz",3);
	pair<string,int> g3(g2);
	pair<int,int> g4(5,10);

	g1 = make_pair(string("geeks"),1);
	g2.first = ".com";
	g2.second = 2;

	cout << "this is pair g" << g1.second << "with the value" 
		<< g1.first << ". " << endl;

	cout << "this is pair g" << g3.second << "with the value"
		<< g3.first << endl;

	cout << "concatenate the values of the pairs g1, g2,g3:"
		<< g1.first + g3.first + g2.first << endl;

	cout << "sawpping the pairs" << endl;

	swap(g1,g2);

	cout << "after swapping" << "g1 has " << g1.first << "and g2 has " << g2.first << endl;

	return 0;
}
