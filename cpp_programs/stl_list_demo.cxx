#include<iostream>
#include<list>
#include<iterator>

using namespace std;

void showlist(list<int> g)
{
	list<int>::iterator it;
	for(it = g.begin(); it != g.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}


int main()
{
	list<int> gqlist1, gqlist2;

	for(int i = 0; i < 10; i++)
	{
		gqlist1.push_back(i*2);
		gqlist2.push_front(i*3);
	}

	cout << "list1 is: " << endl;
	showlist(gqlist1);

	cout << "list2 is: " << endl;
	showlist(gqlist2);

	cout << "qglist1.front() : " << gqlist1.front() << endl;
	cout << "gqlist1.back() : " << gqlist1.back() << endl;

	cout << "qglist.pop_front() : " << endl;
	gqlist1.pop_front();
	showlist(gqlist1);

	cout << "gqlist2.pop_back() : " << endl;
	gqlist2.pop_back();
	showlist(gqlist2);

	cout << "gqlist1.reverse() " << endl;
	gqlist1.reverse();
	showlist(gqlist1);

	cout << "gqlist2.sort()" << endl;
	gqlist2.sort();
	showlist(gqlist2);

	return 0;
}
