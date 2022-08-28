#include <unistd.h>

void ft_display(int arr[], int n){
    for (int a = 0; a < n; a++)
    {
        printf("%d", arr[a]);
    }
    printf(", ");
}


void ft_arr_add(int arr[], int n, int i){

    printf("[A1]i:%d ", i);
    if(i == 0)
    {
        arr[i]=0;

    }else{
        arr[i] = arr[i - 1] + 1;
    }

    while (arr[i] < 10)
    {
        printf("[A2]i:%d ", i);
        if(i == n-1)
        {
            ft_display(arr, n);
        }else{
            printf("[B1]i:%d - arr:%d - n:%d ", i, arr[i], n);
            ft_arr_add(arr, n, i+1);
            printf("[B2]i:%d - arr:%d - n:%d ", i, arr[i], n);
        }
        printf("[C1]%d ", arr[i]);
        arr[i] = arr[i] +1;
        printf("[C2]%d \n\n", arr[i]);
    }


}



void ft_print_combn(int n){
    int arr[10];
    ft_arr_add(arr, n, 0);

}