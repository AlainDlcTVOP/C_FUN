#include <stdio.h>

#define SIZE 5

void showarray(int array[]);
void arrayinc(int array[]);

int main()
{
    int n[] = { 1, 2, 3, 5, 7 };

    puts("Original array:");
    showarray(n);
    arrayinc(n);
    puts("After calling the arrayinc() function:");
    showarray(n);
    return(0);
}

void showarray(int array[])
{
    int x;

    for(x=0;x<SIZE;x++)
        printf("%d\t",array[x]);
    putchar('\n');
}

void arrayinc(int array[])
{
    int y;

    for(y=0;y<SIZE;y++)
        array[y]--;
}