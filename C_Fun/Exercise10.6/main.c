#include <stdio.h>

void grapgh(int count);
int main(int argc, char const *argv[])
{
    int value;

    value = 2;
    while (value <= 464)
    {
        grapgh(value);
        printf("Value is %d\n", value);
        value = value * 2;
    }

    return 0;
}
void grapgh(int count)
{
    int x = 0;
    for (; x < count; x++)
    {
        putchar('*');
        putchar('\t');
    }
}
