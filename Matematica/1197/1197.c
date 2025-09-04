#include <stdio.h>

int main(void){
    int n,m;
    while (scanf("%d %d", &n, &m) != EOF) printf("%d\n", n*m*2);
    return 0;
}