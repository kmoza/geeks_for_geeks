#include<iostream>
#include<queue>

using namespace std;

void showq(queue<int> gq)
{
	queue<int> g = gq;
	while(!g.empty())
	{
		cout << g.front() << " ";
		g.pop();
	}
	cout << endl;
}

int main()
{
	queue<int> gquiz;
	gquiz.push(10);
	gquiz.push(20);

	cout << "the queue is " << endl;
	showq(gquiz);

	cout << "gquiz size" << gquiz.size() << endl;
	cout << "guiz front" << gquiz.front() << endl;
	cout << "gquiz back" << gquiz.back() << endl;

	cout << "gquiz.pop" << endl;
	gquiz.pop();
	showq(gquiz);

	return 0;
}
