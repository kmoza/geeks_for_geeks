#include<iostream>

using namespace std;

class Base
{
	public:
		Base()
		{
		}

		virtual ~Base()
		{
		}

		virtual void displayAction() = 0;

};

class Derived1 : public Base
{
	public:
		Derived1()
		{
			cout << "Derived1 created" << endl;
		}

		~Derived1()
		{
			cout << "Derived destroyed" << endl;
		}

		void displayAction()
		{
			cout << "action from derived1" << endl;
		}

};


class Derived2 : public Base
{
	public:
		Derived2()
		{
			cout << "derived created" << endl;
		}

		~Derived2()
		{
			cout << "derived destroyed" << endl;
		}

		void displayAction()
		{
			cout << "action from derived2" << endl;
		}

};

class User
{
	public:
		User() : pBase(0)
		{
			pBase = new Derived1();
		}

		~User()
		{
			if(pBase)
			{
				delete pBase;
				pBase = 0;
			}
		}

		void action()
		{
			pBase->displayAction();
		}

	private:
		Base *pBase;
};

int main()
{
	User *user = new User();

	user->action();
	delete user;
	return 0;
}
		
