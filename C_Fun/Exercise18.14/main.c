#include <stdio.h>

int main()
{
   
    int age;
    float weight;
    int *a;
    float *w;

    a = &age;           // Initialize the pointers
    w = &weight;

    *a = 43;            // Set the values using
    *w = 217.6;         //  the pointers

    printf("You are %d years old\n",age);
    printf("And you weigh %.1f pounds.\n",weight);


    return 0;
}
