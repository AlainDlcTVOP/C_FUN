#include <stdio.h>

int main(int argc, char const *argv[])
{
    char choice;

    puts("meal plans: ");
    puts("A - Breakfast, Lunch, and Dinner ");
    puts("B - Lunch and Dinner only ");
    puts("C - Dinner only ");
    printf("your choice: ");
    scanf("%c", &choice);

    printf("You've opted for ");
    switch (choice)
    {
    case 'A'|'a':
        printf("Breakfast ");
        break;
    case 'B'|'b':
        printf("Lunch and ");
        break;
    case'C'|'c':
        printf("Dinner ");
        break;

    default:
    printf("as your meal plan\n");
        break;
    }
    return 0;
}
