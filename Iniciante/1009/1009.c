#include <stdio.h>

int Salario(double salario, double vendas, double *final_salary){
    *final_salary = salario + vendas*0.15;
}

int main(){
    char nome[25];
    double salario,vendas, salario_final;
    scanf("%s",&nome);
    scanf("%lf",&salario);
    scanf("%lf",&vendas);
    Salario(salario,vendas, &salario_final);
    printf("TOTAL = R$ %.2lf\n", salario_final);
    return 0;
}