#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d;

    for (a = 'A'; a <= 'Z'; a++)
    {
        for (b = 'A'; b <= 'Z'; b++)
        {
            for (c = 'A'; c <= 'Z'; c++)
            {
                for (d = 'A'; d <= 'Z'; d++)
                {
                    printf("%c%c%c\t", a, b, c, d);
                }
            }
        }
    }
    return 0;
}
