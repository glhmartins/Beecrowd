#include <stdio.h>
#include <math.h>

void preenche_vetor(int n, int vet[]){
    int aux=0;
    while (n>0){
        vet[aux++] = n%10;
        n/=10;
    }
}

void bubble(int vet[], int tam){
    int aux, i ,j;
    for (i = 0; i<tam; i++){
        for (j = i+1; j<tam; j++){
            if (vet[i]>=vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

void verifica_digitos(int n, int m, int *count){
    int aux = 0, ant, tam;
    if (n<=m){
        int vet[(int) log10(n) + 1], tam = sizeof(vet)/sizeof(int);
        preenche_vetor(n, vet);
        bubble(vet, tam);
        ant = vet[0];
        for (int i = 1; i<sizeof(vet)/sizeof(int); i++){
            if (ant == vet[i]){ 
                aux = 1;
                break;
            }
            ant = vet[i];
        }
        if (aux == 0) (*count)++;
        aux = 0;
        verifica_digitos(n+1, m, count);
    }
}

int main(){
    int n,m, count = 0;
    while (scanf("%d %d", &n, &m) != EOF){
        verifica_digitos(n, m, &count);
        printf("%d\n", count);
        count = 0;
    }
    return 0;
}