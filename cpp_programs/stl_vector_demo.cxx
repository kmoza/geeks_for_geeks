#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> g1;
	vector<int>::iterator i;
	vector<int>::reverse_iterator ir;

	for(int i = 1; i <= 5; i++)
	{
		g1.push_back(i);
	}

	cout << "output of begin and end" << endl;

	for(i = g1.begin(); i!= g1.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	//reverse printing

	cout << "output of rbegin and rend" << endl;
	for(ir = g1.rbegin(); ir != g1.rend(); ++ir)
	{
		cout << " " << *ir;
	}

	cout << endl;

	return 0;
}
