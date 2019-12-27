#include <stdio.h>

char *binbin(int n);

// 16 bits
int main()
{
     int input;

    printf("Type a value 9 to 65535\n ");
    scanf("%d", &input);
    printf("%d is binary %s\n", input, binbin(input));

    return 0;
}

char *binbin(int n)
{
    static char bin[17];
    short int x = 0;

    for (; x < 16; x++)
    {
        bin[x] = n & 0x8000 ? '1' : '0';
        n <<= 1;
    }
    bin[x] = '\0';
    return (bin);
}