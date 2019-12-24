#include <stdio.h>

int main(int argc, char const *argv[])
{
    char firstName[17];
    char lastName[17];

    printf("What is your name? ");
    fgets(firstName, 17, stdin);
    printf("What is your lastname? ");
    fgets(lastName, 17, stdin);
    printf("Pleased to meet you,\n %s%s", firstName,lastName);
    return 0;
}
