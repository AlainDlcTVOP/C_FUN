#include <stdio.h>
#include <ctype.h>


/* Write a program that changes all the uppercase letters in a
string of text to lowercase and changes the lowercase letters to uppercase.
Display the results.*/
int main()
{
    char text[] = "ThiS Is a RANsom NoTE!";
    int index;
    char c;

    printf("Original: %s\n",text);
    index=0;
    while(text[index])
    {
        c = text[index];
        if(islower(c))
            text[index] = toupper(c);
        else if(isupper(c))
            text[index] = tolower(c);
        else
            text[index] = c;
        index++;
    }
    printf("Modified: %s\n",text);
    return(0);
}