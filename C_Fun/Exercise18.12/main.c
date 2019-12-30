#include <stdio.h>

int main()
{
    int a, b, c;
    int *iptr;
    int *ipr;
    int *itr;


    a = 6;
    b = 7;
    c = 19;

    printf("Know your ");
    iptr = &a;
    
    ipr = &b;
   
    itr = &c;
 
    printf("%d %d %d\n",*iptr,*ipr,*itr);
    return 0;
}
