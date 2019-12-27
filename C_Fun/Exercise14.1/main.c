# include <stdio.h>

int main(int argc, char const *argv[])
{
   struct player
   {
       char name[32];
       int highScore;
       float hours;
   };
   struct  player xbox;

   printf("Enter the player's name. ");
   scanf("%s", xbox.name);
   printf("Enter their high score: ");
   scanf("%d", &xbox.highScore);
    printf("Enter the hour played: ");
    scanf("%f", &xbox.hours);

   printf("Player %s has a high score of %d\n", xbox.name,xbox.highScore);
   printf("Hour played %2.2f", xbox.hours);
   
   
   
    return 0;
}
