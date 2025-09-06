#include <stdio.h>

int main(){
    int maior = 0, n;
    while (scanf("%d", &n) != 0){
        if (n == 0){
            break;
        }
        if (n>maior){
            maior = n;
        }
    }
    printf("%d\n", maior);
    return 0;
}