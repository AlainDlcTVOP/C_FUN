#include <stdio.h>
#include <stdlib.h>

/* Writing Binary Data */

int main()
{
    FILE *handle;
    int highscore[5];
    int x = 0;
    ;

    handle = fopen("score.dat", "w");

    if (!handle)
    {
        puts("File error");
        exit(1);
    }
    for (; x < 5; x++)
    {
        printf("High score #%d? ", x +1);
        scanf("%d", &highscore[x]);
    }

    printf("What is your highscroe? ");
    scanf("%d", &highscore);
    fwrite(&highscore, sizeof(int), 5, handle);
    fclose(handle);
    puts("Score saved");

    return 0;
}
