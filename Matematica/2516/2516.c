#include <stdio.h>

int main(){
    float distancia, vc, amigo, segundos;
    while (scanf("%f %f %f", &distancia, &vc, &amigo) != EOF){
        if (amigo>=vc){
        printf("impossivel\n");
        }
        else{
            vc -= amigo;
            segundos = distancia/vc;
            printf("%.2f\n", segundos);
        }
    }
    return 0;
}