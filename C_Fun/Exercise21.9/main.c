#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictac;

    struct tm *today;
    int hour;
    char *am = "a.m";
    char *pm = "p.m";
    char *m;

    time(&tictac);
    today = localtime(&tictac);
    hour = today->tm_hour;
    if (hour == 12)
    {
        m = pm;
    }
    else if (hour > 12)
    {
        hour -= 12;
        m = pm;
    }
    else
    {
        m = am;
    }
    printf("The time is %d:%02d:%02d %s\n",
           hour,
           today->tm_min,
           today->tm_sec, m);

        return 0;
}
