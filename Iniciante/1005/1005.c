#include <stdio.h>

int Media(double a, double b, double *media){
    *media = (3.5*a+7.5*b)/11;
}

int main(){
    double a, b, media;
    scanf("%lf", &a);
    scanf("%lf", &b);
    Media(a,b, &media);
    printf("MEDIA = %.5lf\n", media);
    return 0;
}