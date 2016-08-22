#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> g1;

	for(int i = 1; i <= 5; i++)
	{
		g1.push_back(i);
	}

	cout << "size:" << g1.size() << endl;
	cout << "capacity:" << g1.capacity() << endl;
	cout << "max_size:" << g1.max_size() << endl;

	return 0;
}
