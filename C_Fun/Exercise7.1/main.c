# include <stdio.h>


int main(int argc, char const *argv[])
{
    
    int c;

    printf("I'm wating for a charachter: ");
    c = getc(stdin);

    printf("I waited for the '%d' character \n ", c);
    return 0;
}
