#include<iostream>

using namespace std;

class complex_class
{
	private:
		int real, imag;
	public:
		complex_class(int r = 0,int i = 0)
		{
			real = r;
			imag = i;
		}

		//this is automaticall called when + is used with complex numbers
		complex_class operator+(complex_class const &obj)
		{
			complex_class res;
			res.real = this->real + obj.real;
			res.imag = this->imag + obj.imag;
			return res;
		}

		void print()
		{
			cout << real << " +i " << imag << endl;
		}
};

int main()
{
	complex_class c1(10,5),c2(2,4);
	complex_class c3 = c1 + c2;
	c3.print();
	return 0;
}
