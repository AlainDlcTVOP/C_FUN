#include <stdio.h>

int main()
{
    float marketclose[] = {14450.06, 14458.62, 14539.14, 14514.11, 14452.06};
    int day;

    puts("Stock Market Close");
    for(day = 0; day <5; day++)
     {
       printf("Day %d: %.2f\n",day+1,marketclose[day]);

     }
    return (0);
}