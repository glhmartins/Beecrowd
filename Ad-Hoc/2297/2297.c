#include <stdio.h>

int main(){
    int n, a = 0, b = 0, r_a, r_b, teste = 1;
    scanf("%d", &n);
    while (n != 0){
        for (int i = 0; i < n; i++){
            scanf("%d %d", &r_a, &r_b);
            a += r_a;
            b += r_b;
        }
        if (a>b) printf("Teste %d\nAldo\n\n", teste);
        else printf("Teste %d\nBeto\n\n", teste);
        teste++;
        a = 0;
        b = 0;
        scanf("%d", &n);
    }
    return 0;
}