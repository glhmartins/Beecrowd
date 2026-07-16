#include <stdio.h>
#include <math.h>
 
int bhaskara(double a, double b, double c, double *r1, double *r2){
    double delta = (b*b)-4*a*c;
    if (a == 0 || delta < 0) return 0;
    *r1 = (-b+sqrt(delta))/(2*a);
    *r2 = (-b-sqrt(delta))/(2*a);
    return 1;
} 
 
int main() {
    int result;
    double a, b, c, r1, r2, *pr1, *pr2;
    pr1 = &r1;
    pr2 = &r2;
    scanf("%lf%lf%lf", &a, &b, &c);
    result = bhaskara(a, b, c, pr1, pr2);
    if (result == 0) printf("Impossivel calcular\n");
    else printf("R1 = %.5lf\nR2 = %.5lf\n", *pr1, *pr2);
    return 0;
}