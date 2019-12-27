#include <stdio.h>
#define SET 32

/* demonstrates how to use the bitwise OR operator to set bits
in a byte. The OR value is defined as the constant SET at Line 2. It’s binary
00100000*/
char *binbin(int n);

int main()
{
    int bor, result;
    printf("Type a value from 0 to 255: ");
    scanf("%d",&bor);
    result = bor | SET;

    printf("\t%s\t%d\n",binbin(bor),bor);
    printf("|\t%s\t%d\n",binbin(SET),SET);
    printf("=\t%s\t%d\n",binbin(result),result);

    return 0;
}
char *binbin(int n)
{
    static char bin[9];
    int x = 0;

    for (; x < 8; x++)
    {
        bin[x] = n & 0x80 ? '1' : '0';
        n <<= 1;
    }
    bin[x] = '\0';
    return (bin);
}