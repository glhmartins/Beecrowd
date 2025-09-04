#include <stdio.h>

int main(){
    int n,m, aux, soma = 0, menor = 100000001;
    scanf("%d %d", &n, &m);
    int lista[n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &aux);
            soma += aux;
        }
        lista[i] = soma;
        soma = 0;
    }
    for (int l = 0; l < n; l++){
        if(lista[l]<menor){
            aux = l+1;
            menor = lista[l];
        }
    }
    printf("%d\n", aux);
    return 0;
}