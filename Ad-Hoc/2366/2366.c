#include <stdio.h>

int main(){
    int n,m, max = 42195;
    char concluir = 'S';
    scanf("%d %d", &n, &m);
    int points[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &points[i]);
    }
    for (int j = 1; j < n; j++){
        if ((points[j]-points[j-1])>m){
            concluir = 'N';
        }
    }
    if ((max - points[n-1])>m){
        concluir = 'N';
    }
    printf("%c\n", concluir);
    return 0;
}