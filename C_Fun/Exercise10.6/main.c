#include <stdio.h>

void graph(int count, char a) ;
int main(int argc, char const *argv[])
{
    int value;

    value = 2;
    while (value <= 464)
    {
        graph(value, '*');
        printf("Value is %d\n", value);
        value = value * 2;
    }

    return 0;
}
void graph(int count, char ch)
{
    int x = 0;
    for (; x < count; x++)
    {
       
        putchar(ch);
    }
}
