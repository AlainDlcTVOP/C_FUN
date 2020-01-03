#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Write a program that allocates space for 4 int values —
an array. You need to use only one malloc() function to accomplish this
task. Assign 100, 200, 300 and 400 to each int, and then display all three values.*/
int main()
{
    int *value;
    int x;
    
    value = (int *)malloc(sizeof(int) * 4);

    if (value == NULL)
    {
        puts("Unable to allocate memory ");
        exit(1);
    }
   
    *value = 100;
    *(value+1) = 200;
    *(value+2) = 300;
     *(value+3) = 400;

    for (x = 0;  x < 4; x++)
    {
        printf("%d " , *(value+x));
       
    }
    
   return 0;
}
