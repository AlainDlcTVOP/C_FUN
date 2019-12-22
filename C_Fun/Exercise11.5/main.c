#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    b = 16;
    printf("Before, a is unassigned and b=%d\n", b);
   a = b++;
    printf("After, a=%d\n and b=%d\n", a, b);
    return 0;
}
