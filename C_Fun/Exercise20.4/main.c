#include <stdio.h>
#include <stdlib.h>


/*Create a second char
buffer by using a pointer and malloc(). After text is read by the fgets() function, copy that text from the first buffer (input in Listing 20-2) into the second
buffer — all the text except for the newline character, \n, at the end of input
so that the second
buffer contains a version of text in the first buffer where all the vowels have
been replaced with at-signs (@).*/
int main()
{
    char *input;
    char *input2;
    char *i1,*i2;
    input = (char *)malloc(sizeof(char) * 1024);

    input2 = (char *)malloc(sizeof(char) * 1024);

     if(input==NULL || input2==NULL) {
        puts("Unabel to allocate memoty");
        exit(1);
    }
    
    puts("Type something long and boring:");
    fgets(input,1023,stdin);

    puts("Copy buffer.....");
    i1 = input; i2 = input2;

   while(*i1 != '\n')
    {
        switch(*i1)
        {    // vowels
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                *i2++='@';   //replaced with at-signs (@)
                i1++;
                break;
            default:
                *i2++=*i1++;
        }
    }
    *i2 = '\0';

    printf("Original text:\n\"%s\"\n",input);
    printf("Duplicate text:\n\"%s\"\n",input2);


   
    return 0;
}
