#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct entry {
        char actor[32];
        int year;
        char title[32];
    };
    struct entry bond;
    struct entry bond2;
    FILE *a007;

    strcpy(bond.actor,"Sean Connery");
    bond.year = 1962;
    strcpy(bond.title,"Dr. No");

    strcpy(bond2.actor,"Alain De La Cuadra");
    bond2.year = 1981;
    strcpy(bond2.title,"Ida Hunter");

    a007 = fopen("bond.db","w");
    if(!a007)
    {
        puts("SPECTRE wins!");
        exit(1);
    }
    fwrite(&bond,sizeof(struct entry),1,a007);
    fwrite(&bond2,sizeof(struct entry),1,a007);
    fclose(a007);
    puts("Record written");

    return(0);
}