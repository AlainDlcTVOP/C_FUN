# include <stdio.h>
# include <stdlib.h>


int main(int argc, char const *argv[])
{
    int r,a,b;

    puts("100 Randoms Numbers ");
    for(a= 0; a<20; a++) {
        for(b = 0; b<5; b++) {

            r = rand() %21;
            
            printf(" %d \t",r);
        }
        putchar('\n');
    }
    return 0;
}
