#include<stdio.h>

#define INCREMENT(x) ++x

int main()
{
    char *ptr = "Geeks";
    int x = 10;
    printf("%s\n", INCREMENT(ptr));
    printf("%d", INCREMENT(x));
    return 0;
}