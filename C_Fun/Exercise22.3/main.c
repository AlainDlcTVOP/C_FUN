# include <stdio.h>
# include <stdlib.h>

int main()
{
    FILE *fh;
    char buffer[64];

    fh=fopen("hello.txt","r");
    if(fh==NULL) {
        puts("Cant't open file ERROR");
        exit(1);
    }

    while (fgets(buffer,64,fh))
    {
        printf("%s",buffer);
        fclose(fh);
    }
    
    return 0;
}
