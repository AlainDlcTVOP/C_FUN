#include <stdio.h>

int main(int argc, char const *argv[])
{
    int first, secound;

    printf(" Input the first value: ");
    scanf("%d", &first);

    printf(" Input the secound value: ");
    scanf("%d", &secound);

    puts(" Evelauting...");

    if (first < secound)
    {
        printf(" %d is less then %d\n", first, secound);
    }
    if (first > secound)
    {
        printf(" %d is greater then %d\n", first, secound);
    }if (first == secound)
    {
        printf(" %d is equal  %d\n", first, secound);
    }
    

    return 0;
}
