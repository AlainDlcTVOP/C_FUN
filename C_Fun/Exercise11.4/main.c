#include <stdio.h>

int main(int argc, char const *argv[])
{
    int d;

    d = -10;
    while (d < 10)
    {
        printf("%d ", d);
        d++;
    }
    while (d >= -10)
    {
        printf("%d ", d);
        d--;
    }
    putchar('\n');

    return 0;
}
