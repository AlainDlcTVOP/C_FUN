# include <stdio.h>
# include <string.h>
int main(int argc, char const *argv[])
{
    char first[40];
    char last[20];

    printf("What is your first name ? ");
    scanf("%s", first);
     printf("What is your last name ? ");
    scanf("%s", last);
    strcat(first,last);
    printf("Please to meet you, %s!\n", first);
    return 0;
}
