#include <stdio.h>
extern int x = 9;
int z = 10;

typedef long long int ll;
void calSquare(int arg)
{
    printf("square of %d is %d\n", arg, arg * arg);
}

int main(void)
{
    const int a = 32;
    char b = 'G';
    extern int z;
    ll c = 100000;
    printf("a:%d\n", a);
    printf("b:%c\n", b);
    printf("c:%lld\n", c);
    printf("x and z are %d and %d\n", x, z);
    x = 2;
    z = 5;
    printf("x and z are %d and %d\n", x, z);
    while (x > 0)
    {
        static int y = 5;
        y++;
        printf("y:%d\n", y);
        x--;
    }
    calSquare(5);
    return 0;
}