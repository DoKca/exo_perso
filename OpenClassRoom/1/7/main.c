#include <stdio.h>
#include <stdlib.h>

int somme(int arr[], int size);
double moyenne(int arr[], int size);

int main()
{
    int tableau[4] = {10, 20, 10, 20};
    printf("Somme : %d - Moyenne : %lf", somme(tableau, 4), moyenne(tableau, 4));

    return 0;
}


int somme(int arr[], int size){

    int somme = 0;

    for(int i = 0; i < size; i++){
        somme += arr[i];
    }
    return somme;
}

double moyenne(int arr[], int size){

    int somme = 0;

    for(int i = 0; i < size; i++){
        somme += arr[i];
    }
    return somme/size;
}