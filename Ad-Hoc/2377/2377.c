#include <stdio.h>

int main(){
    int a,b,c,d, custo;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    custo = (a*c) + ((a/b)*d);
    printf("%d\n", custo);
    return 0;
}