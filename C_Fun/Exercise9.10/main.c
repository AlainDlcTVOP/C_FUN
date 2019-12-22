# include <stdio.h>

int main(int argc, char const *argv[])
{
    // ASCII code
    char alphabet;

    for(alphabet= 'z'; alphabet >= 'a'; alphabet--) {
        printf("%c\t", alphabet);
    }
    putchar('\n');
    return 0;
}
