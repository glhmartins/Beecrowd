#include <stdio.h>

int Salario(int horas, float money, float * salario){
    *salario = horas*money;
}

int main(){
    int numero, horas;
    float money ,calculo;
    scanf("%d",&numero);
    scanf("%d",&horas);
    scanf("%f",&money);
    Salario(horas,money, &calculo);
    printf("NUMBER = %d\n",numero);
    printf("SALARY = U$ %.2f\n", calculo);
    return 0;
}