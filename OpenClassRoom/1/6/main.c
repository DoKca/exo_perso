#include <stdio.h>
#include <stdlib.h>

void converthm(int *h, int *m);

int main()
{
    int heure = 0;
    int minute = 90;

    converthm(&heure, &minute);

    printf("%d:%d", heure, minute);

    return 0;
}

void converthm(int *h, int *m){
    *h = *m / 60;
    *m =  *m % 60;
}