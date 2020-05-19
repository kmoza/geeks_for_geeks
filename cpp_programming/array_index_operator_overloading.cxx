#include<iostream>
#include<cstdlib>

using namespace std;

class Array
{
	private:
		int *ptr;
		int size;

	public:
		Array(int*,int);
		
		//overloading [] operator
		int& operator[](int);

		void print() const;
};


int& Array::operator[](int index)
{
	if(index>=size)
	{
		cout << "array index out of bound exiting" << endl;
		exit(0);
	}
	return ptr[index];
}

Array::Array(int *p = NULL, int s = 0)
{
	size = s;
	ptr = NULL;
	if(s!=0)
	{
		ptr = new int[s];
		for(int i = 0; i < s; i++)
		{
			ptr[i] = p[i];
		}
	}
}

void Array::print() const
{
	for(int i = 0; i < size; i++)
	{
		cout << ptr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int a[] = {1,2,4,5};

	Array arr1(a,4);
	arr1[2] = 6;
	arr1.print();
	arr1[8] = 6;
	return 0;
}
