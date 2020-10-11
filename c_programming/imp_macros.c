#include<stdio.h>
int main()
{
    printf("file:%s\n", __FILE__);
    printf("date:%s\n", __DATE__);
    printf("time:%s\n", __TIME__);
    printf("line no:%d\n", __LINE__);
    return 0;
}