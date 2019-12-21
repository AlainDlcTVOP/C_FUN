# include <stdio.h>


int main(int argc, char const *argv[])
{
    int fav;

    printf("What is your favorite number: ");
    scanf("%d", &fav);
    printf("%d is my favorite number, too!\n", fav);
    return 0;
}
