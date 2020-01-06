#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

int main()
{
    char curdir[255];

    getcwd(curdir,255);
    printf("Current directory is %s\n",curdir);
    if(mkdir("very_temporary") == -1)
    {
        puts("Directory creation error");
        return(1);
    }
    puts("New directory created.");
    if(chdir("very_temporary") == -1)
    {
        puts("Unable to change directories");
        return(1);
    }
    getcwd(curdir,255);
    printf("Current directory is %s\n",curdir);
    return(0);
}