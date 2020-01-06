#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* File Be Gone! */
int main()
{
    if(unlink("blorfus") == -1) {
        puts("I just can't kill that file");
        exit(1);
    }
    puts("File Killed");

    return (0);
}