#include <stdio.h>
#include <stdlib.h>
#include "arr.h"

int defiler(File *file)
{
    if (file == NULL)
    {
        exit(EXIT_FAILURE);
    }

    int nombreDefile = 0;

    if (file->premier != NULL)
    {
        Element *elementDefile = file->premier;

        nombreDefile = elementDefile->nombre;
        file->premier = elementDefile->suivant;
        free(elementDefile);
    }

    return nombreDefile;
}

void enfiler(File *file, int nvNombre)
{
    Element *nouveau = malloc(sizeof(*nouveau));
    if (file == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nouveau->nombre = nvNombre;
    nouveau->suivant = NULL;

    if (file->premier != NULL)
    {
        Element *elementActuel = file->premier;
        
        while (elementActuel->suivant != NULL)
        {
            elementActuel = elementActuel->suivant;
        }
        elementActuel->suivant = nouveau;
    }
    else
    {
        file->premier = nouveau;
    }
}

File *initialiser()
{
    File *file = malloc(sizeof(*file));
    file->premier = NULL;

    return file;
}

void AfficherListe(File *file)
{
    if(file == NULL){
        exit(EXIT_FAILURE);
    }

    if(file->premier != NULL){

        Element *actuelElem = file->premier;

        while (actuelElem != NULL)
        {
            printf("%d ", actuelElem->nombre);
            actuelElem = actuelElem->suivant;
        }
        
    }
}

int main()
{
    File *maFile = initialiser();
    enfiler(maFile, 4);
    enfiler(maFile, 8);
    enfiler(maFile, 15);
    enfiler(maFile, 16);
    enfiler(maFile, 23);
    enfiler(maFile, 43);
    AfficherListe(maFile);
    printf("\n\n");
    defiler(maFile);
    defiler(maFile);
    AfficherListe(maFile);
    printf("\n\n");
    return 0;
}