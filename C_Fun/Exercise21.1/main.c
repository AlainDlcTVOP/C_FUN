#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;
    int x;

    for(x=0;x<20;x++)
    {
        time(&tictoc);
        printf("%2d:%ld\n",x+1,tictoc);
    }
    return(0);
}