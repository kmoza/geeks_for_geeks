#include<stdio.h>
#include<math.h>

double precision_conversion(double, int);

int main()
{
	//double num;
	//int precision;
	//scanf("%f",&num);
	//scanf("%d",&precision);
	printf("Presision num = %f\n", pow(10,2));
	return 0; 
}

/*
double precision_conversion(double num, int precision)
{
	double tmp_num = num * pow(10,precision);
	printf("tmp num = %f\nand pow precision is%d\n",tmp_num,pow(10,precision));
	int truc_num = (int)tmp_num;
	printf("trunc_num%d\n",truc_num);
	return truc_num / pow(10,precision);	
}
*/
