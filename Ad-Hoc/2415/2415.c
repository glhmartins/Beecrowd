#include <stdio.h>

int main(){
    int n, max = 0, sequencia = 0, aux;
    scanf("%d", &n);
    int lista[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &lista[i]);
    }
    aux = lista[0];
    for (int j = 0; j<n; j++){
        if (lista[j] == aux){
            sequencia++;
        }
        if (sequencia>max){
            max = sequencia;
        }
        if (lista[j] != aux){
            sequencia = 1;
            aux = lista[j];
        }
    }
    printf("%d\n", max);
    return 0;
}