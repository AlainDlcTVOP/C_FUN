#include <stdio.h>
#include <stdlib.h>

/* Code for main.c and a Global Variable */
void second(void);
int count = 0;
int main()
{

    for (; count < 10; count++)
    {
        second();
    }
    return 0;
}
