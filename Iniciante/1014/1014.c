#include <stdio.h>

int main(){
    int km;
    double combustivel, calculo;
    scanf("%d", &km);
    scanf("%lf", &combustivel);
    calculo = km/combustivel;
    printf("%.3lf km/l\n", calculo);
    return 0;
}