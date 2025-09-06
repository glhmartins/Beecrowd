#include <stdio.h>

int main(){
    int n,i,f, sequence = 0, x;
    scanf("%d %d %d", &n,&i,&f);
    int vetor[n];
    for (int a = 0; a<n; a++){
        scanf("%d", &vetor[a]);
    }
    for(int k = 0; k < n-1; k++){
        for(int j = k+1; j < n; j++){
            x = vetor[k]+vetor[j];
            if(x>=i && x<=f){
                sequence++;
            }
        }
    }
    printf("%d\n", sequence);
    return 0;
}