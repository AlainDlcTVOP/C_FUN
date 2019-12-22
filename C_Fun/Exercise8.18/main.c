#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf(" Enter (a-c) \n");

    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
        puts("Feel Free");
        break;
    case 'b':
        puts("Almost there");
        break;
    case 'c':
        puts("Yeeaaahh");
        break;

    default:
        puts("Out of order");
        break;
    }

    return 0;
}
