#include<cstdint>

void bar(int8_t);

void foo(const int32_t *p)
{
	int_32_t *r = const_cast<int32_t*>(p);

	int32_t i = reinterpret_cast<int_32>(r);

	i = (int32_t)r;

	bar(int8_t(i));

	bar(static_cast<int8_t>(i));

}

class Base
{
	public:
		virtual ~Base();

};

class Derived : virtual public Base
{
	public:
		Derived(int32_t);
};

void foo(Base *base)
{
	Derived *d;
	d = reinterpret_cast<Derived*>(base);
	d = dynamic_cast<Derived*>(base);
	audto d2 = Derived(0);
}

int main()
{
	return 0;
}
