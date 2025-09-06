#include <stdio.h>

int main(){
    int n, lata, copo, cq = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d %d", &lata, &copo);
        if (lata>copo){
            cq += copo;
        }
    }
    printf("%d\n", cq);
    return 0;
}