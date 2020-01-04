# include <stdio.h>
# include <time.h>

int main()
{
    time_t tictac;

    time(&tictac);
    printf("The time is nom %s\n",ctime(&tictac));
    return 0;
}
