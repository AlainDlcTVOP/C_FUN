# include <stdio.h>

int main()
{
    int a = sizeof("punto");
    for (int i = 0; i < a; i++)
    {
        printf("*");
    }
    
    return 0;
}
