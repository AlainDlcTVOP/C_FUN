#include <stdio.h>

int main(int argc, char const *argv[])
{
    int fibo, nacci;
    fibo = 0;
    nacci = 1;

    do
    {
        printf("%d ", fibo);
        fibo = fibo + nacci;
        printf("%d ", nacci);
        nacci = nacci + fibo;
    } while (nacci < 300);
    putchar('\n');
    return 0;
}
