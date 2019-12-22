# include <stdio.h>

int main(int argc, char const *argv[])
{
    int count = 0;

    while (1)
    {
        printf("%d ", count);
        count++;
        if(count > 50)
        break;
    }

    putchar('\n');
    
    return 0;
}
