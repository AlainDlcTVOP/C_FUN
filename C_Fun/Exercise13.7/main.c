#include <stdio.h>
#include <string.h>

/*string-comparison functions return an int value based on the result of
the comparison: 0 */
int main(int argc, char const *argv[])
{
    char password[] = "ida";
    char input[15];
    int match;

    printf("Password: ");
    scanf("%s", input);

   

    if (strcasecmp(input,password)==0)
        puts("Password accepted");
    else
        puts("Invalid password. Alert the authorities.");

    return 0;
}
