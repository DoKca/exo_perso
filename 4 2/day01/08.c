void ft_sort_int(int *tab, int size)
{
    int a = 0;
    int i = 0;
    int tmp = 0;

    while (a < size-1)
    {
        i = 0;
        while (i < size-1)
        {
            if(tab[i] > tab[i+1])
            {
                //printf("%d - %d, ", tab[i], tab[i+1]);
                tmp = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = tmp;
                //printf("%d - %d\n\n", tab[i], tab[i+1]);
            }
            i++;
        }
        a++;
    }  
}