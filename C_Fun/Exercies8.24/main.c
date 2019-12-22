#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, code;
    char e,f;

    for (a = 'A'; a <= 'Z'; a++)
    {

        for (b = 'B'; b <= 'Z'; b++)

        {
            for (c = 'C'; c <= 'Z'; c++)
            {
                for (d = 'D'; d <= 'Z'; d++)
                {
                    for (code = 1; code <= 32; code++)
                    {
                        for (e = '!'; e <= '?'; e++)
                        {
                            for (f = '!'; f <= '?'; f++)
                            {
                                printf("%c%c%c%%cd%d%c\t", a, b, c, d, e,f, code);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
