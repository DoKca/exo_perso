#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result;
    int nombre1;
    int nombre2;
    printf("Entre un nombre :");

    scanf("%d", &nombre1);

    printf("Entre un nombre :");
    scanf("%d", &nombre2);

    result = nombre1 + nombre2;

    printf("%d + %d = %d\n", nombre1, nombre2, result);

    return 0;
}