#include <stdio.h>

int main(){
    double r, pi = 3.14159, calculo;
    scanf("%lf", &r);
    calculo = ((4.0/3)*pi)*(r*r*r);
    printf("VOLUME = %.3lf\n", calculo);
    return 0;
}