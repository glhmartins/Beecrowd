#include <stdio.h>
#include <math.h>

int main() {
 
    int n, teste = 1,x;
    scanf("%d", &n);
    while (n!= 0){
        x = pow(2,n);
        printf("Teste %d\n%d\n\n", teste, x-1);
        teste++;
        scanf("%d", &n);
    }
 
    return 0;
}