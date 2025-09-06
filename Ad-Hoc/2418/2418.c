#include <stdio.h>

int main(){
    float n[5], menor = 100, maior = 0, soma = 0;
    for (int i = 0; i < 5; i++){
        scanf("%f", &n[i]);
        if (n[i] < menor){
            menor = n[i];
        }
        if (n[i] > maior){
            maior = n[i];
        }
    }
    soma -= maior+menor;
    for (int j = 0; j < 5; j ++){
        soma += n[j];
    }
    printf("%.1f\n", soma);
    return 0;
}