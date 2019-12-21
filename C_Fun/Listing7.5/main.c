# include <stdio.h>

int main(int argc, char const *argv[])
{
    char firstName [15];

    printf("Type your first name: ");
    scanf("%s", firstName);
    printf("Pleased to meet you, %s\n", firstName);
    return 0;
}
