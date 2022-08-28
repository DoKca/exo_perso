#include <stdio.h>
#include "08.c"


int main()
{
    int a[9] = {9,2,1,3,5,6,1,8,9};

    int i=0;
    while (i <9)
    {
        printf("%d, ", a[i]);
        i++;
    }

    ft_sort_int(a, 9);
    printf("\n\n");
    i=0;
    while (i <9)
    {
        printf("%d, ", a[i]);
        i++;
    }
    

    return 0;
}