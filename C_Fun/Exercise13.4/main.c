#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char answer;

    printf("Would you like to blow up the moon? ");
    scanf("%c", &answer);
    answer = toupper(answer);
    if (answer == 'Y')
        puts("BOOOM");
    else if (answer == 'N')
    
        puts("The moon is safe");
    

    return 0;
}
