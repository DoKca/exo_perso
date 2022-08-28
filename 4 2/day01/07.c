void ft_rev_int_tab(int *tab, int size){
    int i=0;
    int rev;

    while (i < (size / 2))
    {
        rev = tab[i];
        tab[i] = tab[size - i -1];
        tab[size - i -1] = rev;
        i++;

    }
}