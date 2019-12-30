#include <stdio.h>

/*pointer sidekick contains the address, or memory location, of variable
lead.*/
int main()
{
    char lead;
    char *sidekick;

    lead = 'A';       /* initialize char variable*/
    sidekick = &lead; /* initialize pointer*/
    printf("About variable 'lead':\n");
    printf("Size\t\t%u\n", sizeof(lead));
    printf("Contents\t%c\n", lead);
    printf("Location\t%p\n", &lead);
    printf("And variable 'sidekick':\n");
    printf("Contents\t%p\n", sidekick);
    printf("Peek value\t%c\n",*sidekick);

    return 0;
}
