#include<iostream>
#include<string>

using namespace std;

class Pet
{
	public:
		virtual string getDescription() const
		{
			return "this is a pet class";
		}
};

class Dog : public Pet
{
	public:
		virtual string getDescription() const
		{
			return "this is a dog class";
		}
};


//void describe(Pet p) //slices the derived class object
void describe(Pet& p)
{
	cout << p.getDescription() << endl;
}

int main()
{
	Dog d;
	describe(d);
	return 0;
}
