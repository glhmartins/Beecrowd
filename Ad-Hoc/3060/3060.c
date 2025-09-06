#include <stdio.h>

int main(){
    int v,p, resto, divisao;
    scanf("%d", &v);
    scanf("%d", &p);
    divisao = v/p;
    resto = v%p;
    if (resto == 0){
        for (int i = 0; i < p; i++){
            printf("%d\n", divisao);
        }
    }
    else {
        for(int j = 0; j < resto; j++){
            printf("%d\n", divisao+1);
        }
        for (int k = resto+1; k<=p; k++){
            printf("%d\n", divisao);
        }
    }
    return 0;
}