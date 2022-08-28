#include <stdio.h>
#include <stdlib.h>
#define TAILLE_MAX 1000

int main()
{
    FILE *fichier = NULL;
    char chaine[TAILLE_MAX] = "";
    fichier = fopen("test.txt", "r+");

    if(fichier != NULL){
        printf("%s", fgets(chaine, TAILLE_MAX, fichier));
        fclose(fichier);
    }else{
        printf("ERROR");
    }

    return 0;
}