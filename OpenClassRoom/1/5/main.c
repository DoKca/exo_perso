#include <stdio.h>
#include <stdlib.h>
#include "time.h"

const int MAX = 100, MIN = 1;

int nombreMystere = 0;

int nombreEntre = 0;

int main()
{
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    printf("%d\n\n", nombreMystere);

    while (nombreEntre != nombreMystere)
    {
        printf("Choisis un nombre : ");
        scanf("%d", &nombreEntre);

        if (nombreMystere > nombreEntre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombreEntre)
            printf("C'est moins !\n\n");
        else
            printf ("Bravo, vous avez trouve le nombre mystere !!!\n\n");
    }
    
    return 0;
}

