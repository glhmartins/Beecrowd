#include <stdio.h>

int main(){
    double horas, km, calculo;
    scanf("%lf", &horas);
    scanf("%lf", &km);
    calculo = (km*horas)/12;
    printf("%.3lf\n", calculo);
    return 0;
}