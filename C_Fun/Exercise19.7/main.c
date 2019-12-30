#include <stdio.h>

/**pn=x+'A';*/
int main()
{
    char alph[27];
    int x;
    char *pn;

    pn = alph;

    for (int x = 0; x < 26; x++)
    {
        *pn++ = x + 'A';
    }

    pn = alph;

    for (x = 0; x < 26; x++)
    {
        putchar(*pn++);
       
    }
    putchar('\n');

    return 0;
}
