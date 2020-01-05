# include <stdio.h>
# include <stdlib.h>

int main()
{
    FILE *handle;
    int highscore[5];
    int x = 0;

    handle = fopen("score.dat","r");

    if(!handle){
        puts("File Error");
        exit(1);
    }
    fread(highscore,sizeof(int),5,handle);
    fclose(handle);
    for(; x<5; x++) {
        printf("HighScore #%d: %d\n",x+1,highscore[x]);
    }
    
    return 0;
}
