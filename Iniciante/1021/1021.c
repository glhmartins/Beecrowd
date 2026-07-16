#include <stdio.h>

int main(){
    double n;
    int nota100, nota50, nota20, nota10, nota5, nota2;
    int moeda1, moeda50, moeda25, moeda10, moeda5, moeda1c;
    scanf("%lf", &n);
    int notas = n;
    int moedas = (n*100)-(notas*100); 
    nota100 = notas/100;
    notas %= 100;
    nota50 = notas/50;
    notas %= 50;
    nota20 = notas/20;
    notas %= 20;
    nota10 = notas/10;
    notas %= 10;
    nota5 = notas/5;
    notas %= 5;
    nota2 = notas/2;
    notas %= 2;
    moeda1 = notas;
    moeda50 = moedas/50;
    moedas %= 50;
    moeda25 = moedas/25;
    moedas %= 25;
    moeda10 = moedas/10;
    moedas %= 10;
    moeda5 = moedas/5;
    moedas %= 5;
    moeda1c = moedas;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    printf("%d moeda(s) de R$ 0.01\n", moeda1c);
    return 0;
}