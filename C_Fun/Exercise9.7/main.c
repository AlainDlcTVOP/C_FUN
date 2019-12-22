#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count;

    for(count = 25; count >= 0; count--) {
        printf("%d\t", count);
    }

    putchar('\n');
    return 0;
}
