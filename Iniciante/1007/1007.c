#include <stdio.h>

int Diferenca(int a, int b, int c, int d, int *calc){
    *calc = (a*b)-(c*d);
}

int main() {
    int a,b,c,d, diff;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    Diferenca(a, b, c, d, &diff);
    printf("DIFERENCA = %d\n", diff);
    return 0;
};