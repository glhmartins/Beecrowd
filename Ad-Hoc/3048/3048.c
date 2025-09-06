#include <stdio.h>

int main(){
    int n, count = 1;
    scanf("%d", &n);
    int lista[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &lista[i]);
    }
    for(int j = 1; j<n; j++){
        if (lista[j] != lista[j-1]){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}