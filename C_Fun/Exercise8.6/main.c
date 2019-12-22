# include <stdio.h>
# define SECRET 6

int main(int argc, char const *argv[])
{
    int guees;

    printf(" Can you guess the secret number: ");
    scanf("%d", &guees);

    if (guees == SECRET)
    {
        puts("You guessed it! ");
        return 0;
    }
    if (guees != SECRET)
    {
        puts("Wrong");
        return 1;
    }
    
    
    
}
