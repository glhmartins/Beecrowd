#include <stdio.h>

int main(){
    double a,b,soma;
    scanf("%lf %lf", &a, &b);
    soma = (b-a+1)*(a+b)/2;
    printf("%.0lf\n", soma);
    return 0;
}