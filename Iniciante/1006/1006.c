#include <stdio.h>

int Media(double a, double b, double c, double *media){
    *media = (2*a+3*b+5*c)/10;
}

int main(){
    double a,b,c, media;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    Media(a,b,c, &media);
    printf("MEDIA = %.1lf\n", media);
    return 0;
}