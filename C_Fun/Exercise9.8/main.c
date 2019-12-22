# include <stdio.h>

int main(int argc, char const *argv[])
{
    // ASCII code
    char alphabet;

    for(alphabet= 'A'; alphabet <= 'Z'; alphabet++) {
        printf("%d\t", alphabet);
    }
    putchar('\n');
    return 0;
}
