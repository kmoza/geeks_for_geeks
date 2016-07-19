#include<iostream>

using namespace std;

class Employee
{
	public:
		virtual void raiseSalary()
		{
		}

		virtual void promote()
		{
		}

};

class Manager : public Employee
{
	virtual void raiseSalary()
	{
	}

	virtual void promote()
	{
	}
};

void globalRaiseSalary(Employee *emp[], int n)
{
	for(int i = 0; i < n; i++)
	{
		emp[i]->raiseSalary();
	}
}

int main()
{
	return 0;
}
