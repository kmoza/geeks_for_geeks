#include<stdio.h>
#include<string.h>

//#pragma pack(1)

struct bit_fields
{
	unsigned int x:4;
	int y:12;
	//int :1;
	unsigned int a:2;
};

int main()
{
	printf("sizeof struct is %d\n",sizeof(struct bit_fields));
	char* b_ptr;
	struct bit_fields b_struct;
	memset((void*)&b_struct,0,sizeof(b_struct));
	b_struct.x = 1;
	b_struct.y = 2;
	b_struct.a = 3;
	b_ptr = (char*)&b_struct;
	printf("byte =%d\n",*b_ptr);
	printf("2nd byte=%d\n",*(b_ptr+1));
	printf("3rd byte=%d\n",*(b_ptr+2));
	printf("4th byte=%d\n",*(b_ptr+3));
	return 0;
}
