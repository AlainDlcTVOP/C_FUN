# include <stdio.h>

int main(int argc, char const *argv[])
{
    char i;

    do
    {
        i = getchar();
        putchar(i);
    } while (i != '.');
    
    putchar('\n');

    return 0;
}

