#include <stdio.h>

char *escolher(int h, int d, int g){
    if ((h>=200 && h<=300) && (d>=50) && (g>=150)) return "Sim";
    return "Nao";
}

int main(){
    int n, atributos[3];
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<3; j++) scanf("%d", &atributos[j]);
        printf("%s\n", escolher(atributos[0], atributos[1], atributos[2]));
    }
    return 0;
}
