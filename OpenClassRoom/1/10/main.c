#include <stdio.h>
#include <stdlib.h>
#include "arr.h"
#include "ff.c"

void insertionInside(Liste *liste, int nouveauNB, Element *adrss)
{
    Element *nouveau = malloc(sizeof(*nouveau));
    if(liste == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->nombre = nouveauNB;
    nouveau->suivant = adrss->suivant;
    adrss->suivant = nouveau;
    liste->taille = liste->taille +1;
}

void suppressionInside(Liste *liste, Element *adrss)
{
    Element *next = NULL;

    if(liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    if(adrss->nombre)
    {
        Element *actuel = liste->premier;
        
        while (actuel != NULL && actuel != adrss)
        {  
            //ET IF ADRSS = liste->premier changer le premier
            
            //printf("%d -> ", actuel->nombre);
            if(actuel->suivant == adrss)
            {
                //printf("--- %d = %d ", actuel->nombre, adrss->nombre);
                actuel->suivant = adrss->suivant;
                free(adrss);
                liste->taille = liste->taille -1;
            }
            
            //printf("\n");
            actuel = actuel->suivant; 
        }
    }
}

void suppListe(Liste *liste)
{
    if(liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

   Element *actuel = liste->premier;
   Element *supp = NULL;

   while (actuel != NULL)
   {
       supp = actuel;
       actuel = actuel->suivant;
       free(supp);

   }
    liste->premier=NULL;
}

void sizeListe(Liste *liste)
{
    if(liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

   printf("La liste fait : %d\n", liste->taille);
}

int main()
{
    Element *pt = NULL;
    Liste *maListe = initialisation();

    insertion(maListe, 4);
    pt = insertion(maListe, 8);
    //insertion(maListe, 8);
    insertion(maListe, 15);
    insertionInside(maListe, 11, pt);
    sizeListe(maListe);
    //suppressionInside(maListe, pt);
    afficherListe(maListe);

    return 0;
}