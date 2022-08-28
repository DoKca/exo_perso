#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    int *m = &i;
    printf("%d - %d - %d - %d", i, *m, m, &m);
    //10 - 10 - 6422044 - 6422032

    return 0;
}
/* 

int *m    signifie créer une variable (un pointeur) nommé 'm', ayant pour but de stocker l'adresse d'une autre variable de type int

&i        signifie récupérer l'adresse de la variable 'i'

i         signifie récupérer la valeur de la variable 'i'

m         signifie récupérer l'adresse de la variable stocker par 'm', dans cette exemple récuperer l'adresse de la variable 'i'

*m        signifie récupérer la valeur de la variable stocker par 'm', dans cette exemple récuperer la valeur de la variable 'i'

&m        signifie récupérer l'adresse de la variable (un pointeur) 'm'
