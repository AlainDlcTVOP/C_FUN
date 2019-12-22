#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, larger;
    printf("Enter value A: ");
    scanf("%d", &a);
    printf("Enter diffrent value  B: ");
    scanf("%d", &b);

    larger = (a > b) ? a : b;
    printf("Value %d is larger \n", larger);

    return 0;
}
