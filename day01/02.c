void ft_swap(int *a, int *b){
    printf("%d - %d", *a, *b);
    int oa = *a;
    int ob = *b;

    *a = ob;
    *b = oa;
    printf("    %d - %d", *a, *b);
}