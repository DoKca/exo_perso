#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    printf("| .  .  .  .  .  .  . |\n");
    printf("| .  .  .  .  .  .  . |\n");
    printf("| .  .  .  .  .  .  . |\n");
    printf("| .  .  .  .  .  .  . |\n");
    printf("| .  .  .  .  .  .  . |\n");
    printf("| .  .  .  .  .  .  . |\n");
    */
    int[,] array = new int[7, 6];
    int choix;

    printf("----- PUISSANCE 4 -----\n\n");

    scanf("%d", &choix);

    printf("Vous avez choisi la colonne : %d", choix);


    return 0;
}