#include <stdio.h>

int bubble_sort(int arr[], int size){
    int aux;
    for (int i = 0; i < size-1; i++){
        for( int j = 0; j < size-1; j++){
            if(arr[j]>arr[j+1]){
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
}

int main(){
    int n, x;
    scanf("%d", &n);
    int lista[n];
    for (int i = 0; i < n; i++) {scanf("%d", &lista[i]);}
    x = sizeof(lista)/sizeof(lista[0]);
    bubble_sort(lista, x);
    if (n%2 != 0) printf("%d\n", lista[n/2]);
    else printf("%d\n", (lista[n/2-1]+lista[n/2])/2);
    return 0;
}