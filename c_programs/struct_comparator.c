#include<stdio.h>

struct stud
{
	int marks;
	double age;
};

//comparator function using generic void pointers
//compare functions based on the age
int comparator(void*,void*);

int main(void)
{
	struct stud s1 = {100,23};
	struct stud s2 = {200,25};
	
	if(comparator(&s1,&s2)>0)
	{
		printf("Student s1 has more than student s2\n");
	}
	else if(comparator(&s1,&s2)==0)
	{
		printf("student s1 and s2 have equal age\n");
	}
	else
	{
		printf("student s2 has more age than s1\n");
	}
	return 0;

}

int comparator(void* p1, void* p2)
{
	return (((struct stud*)p1)->age - ((struct stud*)p2)->age);
}



