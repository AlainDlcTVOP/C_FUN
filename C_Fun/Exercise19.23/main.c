#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create(int *a);
void show(int *a);

int main()
{
    int r[10];
    int *pr;

    pr = r;
    create(pr);
    show(pr);

    return(0);
}

void create(int *a)
{
    int x,r;

    srand((unsigned)time(NULL));
    for(x=0;x<10;x++)
    {
        r = rand();
        r%=10;
        *a = r;
        a++;
    }
}

void show(int *a)
{
    int x;

    for(x=0;x<10;x++)
        printf("%d\n",*a++);
}