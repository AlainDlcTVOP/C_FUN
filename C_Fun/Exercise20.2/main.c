#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* write a program that
asks for the current temperature outside as a floating-point value. Have the
code ask whether the input is Celsius or Fahrenheit. Use malloc() to create
storage for the value input. Display the resulting temperature in Kelvin. Here
are the formulae*/
int main()
{
    float *temp;
    char c;
    temp = (int *)malloc(sizeof(int) * 1);

    if (temp == NULL)
    {
        puts("Unable to allocate memory ");
        exit(1);
    }
    printf("What is the temperature? ");
    scanf("%f", temp);
    getchar();
    printf("Is that Celsius or Fahrenheit (C/F)? ");
    c = toupper(getchar());
    if (c == 'F')
        *temp = (*temp + 459.67) * (5.0 / 9.0);
    else
        *temp += 273.15;
    printf("It's %.1f Kelvin outside.\n", *temp);
}
