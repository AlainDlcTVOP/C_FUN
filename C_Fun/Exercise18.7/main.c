#include <stdio.h>

/*Memory Locations in an Array*/
int main()
{
    char hello[] = "Hello!";
    int i = 0;

    while(hello[i]) {
        printf("%c at %p\n", hello[i], &hello[i]);
        i++;
    }
    return 0;
}
