# include <stdio.h>
# include <string.h>

int main()
{
    char string[] = "Does this string make me look fat? ";
    int array[5];

    printf("The string %s has the size of %u \n",string,sizeof(string));
    printf("and a length of %ld.\n",strlen(string));
   printf("The array has a size of %u.\n",sizeof(array));
    return 0;
}
