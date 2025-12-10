#include <stdio.h>

int Custo(float p1, int q1, float p2, int q2, float * custo){
    *custo = (q1*p1) + (q2*p2);
}

int main(){
    int numero_produto1, quantidade_produto1, numero_produto2, quantidade_produto2;
    float valor_produto1, valor_produto2, custo;
    scanf("%d %d %f", &numero_produto1, &quantidade_produto1, &valor_produto1);
    scanf("%d %d %f", &numero_produto2, &quantidade_produto2, &valor_produto2);
    Custo(valor_produto1, quantidade_produto1, valor_produto2, quantidade_produto2, &custo); 
    printf("VALOR A PAGAR: R$ %.2f\n", custo);
    return 0;
}