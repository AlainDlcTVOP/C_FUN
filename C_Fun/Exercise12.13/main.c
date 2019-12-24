#include <stdio.h>
#define SIZE 6

int main(int argc, char const *argv[])
{
    int bubble[] = {95, 60, 6, 87, 50, 40};
    int inner, outer, temp, x;

    /*Display the origenal array*/
    puts("Origenal Array: ");
    for (x = 0; x < SIZE; x++)
    {
        printf("%d\t", bubble[x]);
        putchar('\0');
    }

    /* Bubble sort*/
    for (outer = 0; outer < SIZE; outer++)
    {
        for (inner = outer + 1; inner < SIZE; inner++)
        {
            if (bubble[outer] > bubble[inner])
            {
                temp = bubble[outer];
                bubble[outer] = bubble[inner];
                bubble[inner] = temp;
            }
        }
    }

    /* Display sorted array */
    puts(" Sorted Array: ");
    for (x = 0; x < SIZE; x++)
        printf("%d\t", bubble[x]);

        return 0;
}
