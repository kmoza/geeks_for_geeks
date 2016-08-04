//commit for git credential helper
#include<iostream>
using namespace std;

class Base
{
	public:
		Base()
		{
		}

		virtual ~Base() //ensures to invoke actual object destructor
		{
		}

		virtual void changeAttributes() = 0;

		//the virtual constructor
		static Base* create(int id);

		//the virtual copy constructor
		virtual Base* clone() = 0;

};

class Derived1 : public Base
{
	public:
		Derived1()
		{
			cout << "Derived1 created" << endl;
		}

		Derived1(const Derived1& rhs)
		{
			cout << "Derived1 created by deep copy" << endl;
		}

		~Derived1()
		{
			cout << "~Derived1 destrroyed" << endl;
		}

		void changeAttributes()
		{
			cout << "Derived1 attributes changed" << endl;
		}

		Base* clone()
		{
			return new Derived1(*this);
		}
};


class Derived2 : public Base
{
	public:
		Derived2()
		{
			cout << "Derived2 created" << endl;
		}

		Derived2(const Derived2& rhs)
		{
			cout << "Derived2 created by deep copy" << endl;
		}

		~Derived2()
		{
			cout << "~Derived2 destroyed" << endl;
		}

		void changeAttributes()
		{
			cout << "Derived2 attributes changed" << endl;
		}

		Base* clone()
		{
			return new Derived2(*this);
		}

};

class Derived3: public Base
{
	public:
	Derived3()
	{
		cout << "Derived3 created" << endl;
	}
		     
	Derived3(const Derived3& rhs)
	{
	        cout << "Derived3 created by deep copy" << endl;
	}
			 
	~Derived3()
	{
	       cout << "~Derived3 destroyed" << endl;
	}
	     
	void changeAttributes()
	{
		cout << "Derived3 Attributes Changed" << endl;
	}
				 
	Base *clone()
	{
	       return new Derived3(*this);
	}
};

Base *Base::create(int id)
{
	if(id == 1)
	{
		return new Derived1;
	}
	else if (id == 2)
	{
		return new Derived2;
	}
	else
	{
		return new Derived3;
	}
}

class User
{
	public:
		User():pBase(0)
		{
			int input;
			cout << "Enter id(1,2 or3):";
			cin >> input;

			while((input != 1) && (input!=2)&& (input!=3))
			{
				cout << "Enter id 1,2 or 3 only";
				cin >> input;
			}
			pBase = Base::create(input);
		}

		~User()
		{
			if(pBase)
			{
				delete pBase;
				pBase = 0;
			}
		}
		void Action()
		{
			Base *pnewBase = pBase->clone();

			pnewBase->changeAttributes();
			delete pnewBase;
		}

	private:
		Base *pBase;
};

int main()
{
	User *user = new User();
	user->Action();
	delete user;
	return 0;
}
				

