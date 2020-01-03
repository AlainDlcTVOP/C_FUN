#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*demonstrates how a structure can be created by using the
malloc() function. The structure is defined at Line 7, and a pointer variable
of that structure type is declared at Line 12. In Line 15, malloc() allocates
enough storage for a structure. The size of the structure is determined by
using the sizeof operator*/
int main()
{
    struct stock
    {
        char symbol[15];
        int quantity;
        float price;
    };
    struct stock *invest;

    /* Create structure in memory */
    invest = (struct stock *)malloc(sizeof(struct stock));

    if (invest == NULL)
    {
        puts(" Some kind of malloc() ERROR");
        exit(1);
    }
    /* Assign structure data */
    strcpy(invest->symbol, "GOOG");
    invest->quantity = 100;
    invest->price = 801.19;

    /* Display database */
    puts("Investmenr Portfolio");
    printf("Symbol\tShares\tPrice\tValue\n");
    printf("% -6s\t % 5d\t % .2f\t % .2f\n",
           invest->symbol,
           invest->quantity,
           invest->price,
           invest->quantity * invest->price);

    return 0;
}
