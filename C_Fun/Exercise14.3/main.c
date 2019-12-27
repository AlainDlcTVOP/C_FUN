#include <stdio.h>

int main(int argc, char const *argv[])
{
    struct president
    {
        char name[40];
        unsigned int year;
    } first = {
        "George Washington",
        1789},
      secound = {"Alain De La Cuadra", 1981};

    printf("The first president was %s\n", first.name);
    printf("He was inaugurated in %d\n", first.year);
    printf("The Best president was %s\n", secound.name);
    printf("He was inaugurated in %d\n", secound.year);

    return 0;
}
