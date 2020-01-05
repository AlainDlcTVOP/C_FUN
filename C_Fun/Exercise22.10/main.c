#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* A File Dumper */
int main(int argc, char *argv[])
{
    char filename[255];
    FILE *dumpme;
    int x, c;

    if(argc >1) {
        strcpy(filename,argv[1]);
    }else
    {
         printf("File to dump: ");
        scanf("%s",filename);
    }
    

   
    dumpme = fopen(filename, "r");
    if (!dumpme)
    {
        printf("Unable to open '%s'\n", filename);
        exit(1);
    }
    x = 0;
    while ((c = fgetc(dumpme)) != EOF)
    {
        printf("%02X ", c);
        x++;
        if (!(x % 16))
            putchar('\n');
    }
    putchar('\n');
    fclose(dumpme);
    return (0);
}