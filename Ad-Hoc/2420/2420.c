#include <stdio.h>

int main(){
    int n, soma = 0, indice = 0, aux = 0;
    scanf("%d", &n);
    int lista[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &lista[i]);
        soma += lista[i];
    }
    soma /= 2;
    for (int j = 0; j < n; j++){
        aux += lista[j];
        if (aux == soma){
            indice = j+1;
            break;
        }
    }
    printf("%d\n", indice);
    return 0;
}