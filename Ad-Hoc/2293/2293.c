#include <stdio.h>

int main(){
    int n,m, maior = 0, aux;
    scanf("%d %d", &n, &m);
    int linha[n], coluna[m];
    for (int x = 0; x<n; x++){
        linha[x] = 0;
    }
    for (int y = 0; y<m; y++){
        coluna[y] = 0;
    }
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            scanf("%d", &aux);
            linha[i] += aux;
            coluna[j] += aux;
        }
        

    }
    for (int i = 0; i<n; i++){
        if (linha[i]>maior){
            maior = linha[i];
        }
    }
    for (int j = 0; j<m; j++){
        if (coluna[j]>maior){
            maior = coluna[j];
        }
    }
    printf("%d\n", maior);
    return 0;
}