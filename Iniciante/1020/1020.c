#include <stdio.h>

int main(){
    int x, anos, meses, dias;
    scanf("%d", &x);
    anos = x/365;
    meses = (x%365)/30;
    dias = (x%365)%30;
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    return 0;
}