# include <stdio.h>
# include <stdlib.h>

int main()
{
    FILE *fh;
    fh=fopen("hello.txt","w");
    if(fh==NULL) {
        puts("Cant open file ");
        exit(1);
    }
    fputs("My C program wrote this file.\n",fh);
    fprintf(fh,"Look i made it!\n");
    fclose(fh);
    return 0;
}
