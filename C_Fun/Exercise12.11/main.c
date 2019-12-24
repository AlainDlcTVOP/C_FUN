#include <stdio.h>


/*The %15s conversion character tells the first scanf() function to read only
the first 15 characters of input and place it into the char array (string). Any
extra text is then read by the second scanf() function, and any extra text
after that is discarded.*/
int main()
{
    char firstname[16],lastname[16];

    printf("What is your first name? ");
    scanf("%15s",firstname);
    printf("What is your last name? ");
    scanf("%15s",lastname);
    printf("Pleased to meet you, %s %s\n",firstname,lastname);
    return(0);
}