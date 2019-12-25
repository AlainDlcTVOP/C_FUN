#include <stdio.h>
#define SIZE 6

int main(int argc, char const *argv[])
{
    char president[SIZE][20] = {
        "Clinton",
        "Bush",
        "Obama",
        "Washington",
        "Adams",
        "Jefferson"};

    int x, index;
   
    for (x = 0; x < SIZE; x++)
    {
      puts(president[x]);
    }
    return 0;
}
