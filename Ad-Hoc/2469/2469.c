#include <stdio.h>

int main(){
    int n, maior = 0, number = 0, aux = 0, x;
    scanf("%d", &n);
    int lista[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &lista[i]);
    }
    for (int j = 0; j < n; j++){
        x = lista[j];
        for (int k = j; k < n; k++){
            if (lista[k] == x){
                aux++;
            }
        }
        if (aux>=maior){
            if (aux>maior){
                number = x;
            }
            else if (aux == maior){
                if (x>number){
                    number = x;
                }
            }
            maior = aux;
        }
        aux = 0;
    }
    printf("%d\n", number);
    return 0;
}