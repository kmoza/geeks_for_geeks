#include<iostream>
#include<deque>

using namespace std;

void showdq(deque<int> g)
{
	deque<int>::iterator it;

	for(it = g.begin(); it != g.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	deque<int> gquiz;
	gquiz.push_back(10);
	gquiz.push_front(20);
	gquiz.push_back(30);
	gquiz.push_front(15);

	cout << "the deque gquiz is" << endl;
	showdq(gquiz);


	cout << "size of queue" << gquiz.size() << endl;
	cout << "queue max size" << gquiz.max_size() << endl;

	cout << "gquiz at(2) " << gquiz.at(2) << endl;
	cout << "gquiz front() " << gquiz.front() << endl;
	cout << "gquiz.back() " << gquiz.back() << endl;

	cout << "after poping the front" << endl;
	gquiz.pop_back();
	showdq(gquiz);

	return 0;
}
