#include <stdio.h>

int main(){

    double pi  = 3.14159, r, calculo;
    scanf("%lf", &r);
    calculo = (r*r)*pi;
    printf("A=%0.4lf\n", calculo);
    return 0;

}