#include <stdio.h>

/*The Joy of Hex converter*/
char *binbin(int n);
int main()
{
    int b, x = 0;

    b = 0x11;

    for (; x < 8; x++)
    {
        printf("%s 0x%04X %4d\n", binbin(b), b, b);
        b <<= 1;
    }
    return 0;
}
char *binbin(int n)
{
    static char bin[17];
    int x = 0;

    for (; x < 16; x++)
    {
        bin[x] = n & 0x8000 ? '1' : '0';
        n <<= 1;
    }
    bin[x] = '\0';
    return (bin);
}