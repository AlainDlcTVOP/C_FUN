# include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[10];

    printf(" Who are you ? ");
    scanf("%s", name);
    printf(" Glad to meet you, %s \n", name);
    return 0;
}
