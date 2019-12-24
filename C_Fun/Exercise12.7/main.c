#include <stdio.h>
#include <math.h>


/*Write a program that uses two arrays. 
The first array is initialized to the values 10, 12, 14, 15, 16, 18, 20 and 21. The second array is the
same size but not initialized. In the code, fill the second array with the square
root of each of the values from the first array. Display the results.*/
int main()
{
    int first[] = { 10, 12, 14, 15, 16, 18, 20, 22 };
    float second[8];
    int x;

    for(x=0;x<8;x++)
        second[x] = sqrt(first[x]);

    for(x=0;x<8;x++)
        printf("The square root of %d is %.2f\n",first[x],second[x]);
    return(0);
}