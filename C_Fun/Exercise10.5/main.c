#include <stdio.h>
#include <stdint.h>

void vegas();
int main(int argc, char const *argv[])
{
    signed int a;

    a = 365;
    printf("In the main function, a=%d\n", a);
    vegas();
    printf("In the main function, a=%d\n", a);
    return 0;
}

void vegas()
{
    int a;

    a = -10;
    printf("in the vegas function, a=%d\n", a);
}