void afficherListe(Liste *liste)
{
    
    if(liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Element *actuel = liste->premier;


    while (actuel != NULL)
    {
        printf("%d -> ", actuel->nombre);
        actuel = actuel->suivant;
    }
    printf("NULL\n");

}

void suppression(Liste *liste)
{
    if(liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    if(liste->premier != NULL)
    {
        Element *aSupprimer = liste->premier;
        liste->premier = liste->premier->suivant;
        free(aSupprimer);
        liste->taille = liste->taille -1;
    }
}

Element *insertion(Liste *liste, int nvNombre)
{
    Element *pt = NULL;
    Element *nouveau = malloc(sizeof(*nouveau));
    if(liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->nombre = nvNombre;
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
    liste->taille = liste->taille +1;
    pt = nouveau;
    return pt;
    
}

Liste *initialisation()
{
    Liste *liste = malloc(sizeof(*liste));
    Element *element = malloc(sizeof(*element));

    if(liste == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }

    element->nombre = 0;
    element->suivant = NULL;
    liste->premier = element;
    liste->taille = 1;
    return liste;
}