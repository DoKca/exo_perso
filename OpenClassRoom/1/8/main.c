#include <stdio.h>
#include <stdlib.h>
#include "coord.h"

void initCoord(coordonees *coord){
    coord->x = 0;
    coord->y = 0;
}

int main()
{
    coordonees coord;
    initCoord(&coord);
    printf("%d - %d", coord.x, coord.y);

    return 0;
}
