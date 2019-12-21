# include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    a = 6;
    b = a + 2;

    if (a > b)
    {
        printf("%d is greater than %d", a,b);
    }
    else
    {
         printf("%d is lesser than %d", a,b);
    }
    
    
    return 0;
}
