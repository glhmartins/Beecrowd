#include <stdio.h>

int main(){
    double a, b, c, pi = 3.14159, tr, circle, trapezio, quadrado, retangulo;
    scanf("%lf %lf %lf", &a , &b ,&c);
    tr = (a*c)/2;
    circle = pi*(c*c);
    trapezio = ((a+b)/2)*c;
    quadrado = b*b;
    retangulo = a*b;
    printf("TRIANGULO: %.3lf\n",tr);
    printf("CIRCULO: %.3lf\n",circle);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n",retangulo);
    return 0;
}