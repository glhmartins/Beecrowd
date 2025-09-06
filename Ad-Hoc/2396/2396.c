#include <stdio.h>

int main(){
    int n,m, aux, soma = 0, lista_aux[3] = {0,0,0}, i1, i2, menor = 100000001;
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
    for (int k = 0; k < 3; k++){
        for (int l = 0; l < n; l++){
            if(k == 0 && lista[l]<menor){
                lista_aux[k] = l+1;
                menor = lista[l];
                i1 = l;
            }
            else if (k == 1 && lista[l]<menor && l!=i1){
                lista_aux[k] = l+1;
                menor = lista[l];
                i2 = l;
            }
            else if (k == 2 && lista[l]<menor && l!=i1 && l!=i2){
                lista_aux[k] = l+1;
                menor = lista[l];
            } 
        }
        menor = 100000001;
        printf("%d\n", lista_aux[k]);
    }
    return 0;
}