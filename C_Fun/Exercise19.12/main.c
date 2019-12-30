#include <stdio.h>

int main()
{
    char sample[] = "From whence cometh my help?\n";
    int index = 0;

    char *s;

    s = sample;

    while (*s != '\0')
    {
        putchar(*s);
        s++;
    }

    return 0;
}
