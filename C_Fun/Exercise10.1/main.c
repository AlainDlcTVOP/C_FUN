# include <stdio.h>
# include <stdint.h>

void busy();
int main(int argc, char const *argv[])
{
    uint8_t loop;
    char input [32];

   loop = 0;

    while (loop<7)
    {
        busy();
        fgets(input,31,stdin);
        loop++;
    }
    
    return 0;
}
void busy() 
{

printf("C:\\DOS> ");

}