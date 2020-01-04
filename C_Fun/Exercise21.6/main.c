#include <stdio.h>
#include <time.h>

int main()
{
  
    time_t tictoc;
    struct tm *today;

    time(&tictoc);
    today = localtime(&tictoc);
    printf("Today is %d/%d/%d  Hour: %d:%d:%d\n",
        today->tm_mon+1,
        today->tm_mday,
        today->tm_year+1900,
        today->tm_hour,
        today->tm_min,
        today->tm_sec);
   
    return 0;
}
