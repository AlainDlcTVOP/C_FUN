# include <stdio.h>

int main(int argc, char const *argv[])
{
   char sentece[] = "Random text";
   int index;

   index = 0;

   while(sentece[index] != '\0') {
       putchar(sentece[index]);
       index++;
   }

   putchar('\n');


    return 0;
}
