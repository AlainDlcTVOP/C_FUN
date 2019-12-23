#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float value;

    puts("The Holy Numbers of Computing");
    for (value = 0; value <= 10; value++)
    {
        printf(" \t2^%.0f = %.0f\n ", value, pow(2, value));

         
    }

   return 0;
}
