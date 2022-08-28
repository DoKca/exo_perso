#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix = 0;
    printf("=== Menu ===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac\n");

while (choix != 1 && choix != 2 && choix != 3 && choix != 4)
{


    printf("%d\n", choix);
    printf("Votre choix ?\n\n");
    scanf("%d", &choix);

    switch (choix)
    {
    case 1:
        printf("Royal Cheese\n");
        break;
    
    case 2:
        printf("Mc Deluxe\n");
        break;

    case 3:
        printf("Mc Bacon\n");
        break;

    case 4:
        printf("Big Mac\n");
        break;
    
    default:
        printf("Merci de choisir un des burgers propose ");
        break;
    }
}
    return 0;
}