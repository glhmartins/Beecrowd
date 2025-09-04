#include <stdio.h>

int main(){
    int n, k, aux;
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        scanf("%d", &k);
        for (int j = 0; j<k; j++){
            scanf("%d", &aux);
            if (aux == 1){
                printf("Rolien\n");
            } else if (aux == 2){
                printf("Naej\n");
            } else if (aux == 3){
                printf("Elehcim\n");
            } else printf("Odranoel\n");
        }
    }
    return 0;
}