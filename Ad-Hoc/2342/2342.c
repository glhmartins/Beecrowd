#include <stdio.h>
#include <string.h>

int main(){
    int maximo, numero0, numero1, resultado;
    char operation;
    scanf("%d", &maximo);
    scanf("%d %c %d", &numero0, &operation, &numero1);
    if(operation == '+') resultado = numero0+numero1;
    else if (operation == '*') resultado = numero0*numero1;
    if(resultado>maximo) printf("OVERFLOW\n");
    else printf("OK\n");
    return 0;
}