#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, code;
    char e;

    for (a = 'A'; a <= 'Z'; a++)
    {
        
        for (b = 'A'; b <= 'Z'; b++)

        {
            for (c = 'A'; c <= 'Z'; c++)
            {
                for (d = 'A'; d <= 'Z'; d++)
                {
                    for (code = 1; code <= 32; code++)
                    {
                        for (e  = '!'; e <= '?'; e++)
                        {
                             printf("%c%c%c%%cd%d\t", a, b, c, d,e, code);
                        }
                        
                       
                    }
                }
            }
        }
    }
    return 0;
}
