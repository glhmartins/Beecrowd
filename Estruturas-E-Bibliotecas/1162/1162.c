#include <stdio.h>

int bubble_sort(int arr[], int size){
    int movimentos = 0, aux;
    for (int i = 0; i < size-1; i++){
        for( int j = 0; j < size-1; j++){
            if(arr[j]>arr[j+1]){
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
                movimentos++;
            }
        }
    }
    return movimentos;
}

int main(){
    int n, m, tamanho, x;

    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &m);
        int vagoes[m];
        for (int j = 0; j < m; j++){
            scanf("%d", &vagoes[j]);
        }
        tamanho = sizeof(vagoes)/sizeof(vagoes[0]);
        x = bubble_sort(vagoes,tamanho);
        printf("Optimal train swapping takes %d swaps.\n", x);
    }

    return 0;
}