#include <stdio.h>

int main(){
    int dia,mes;
    scanf("%d/%d", &dia, &mes);
    if ((dia >= 21 && mes == 3) || (dia <= 20 && mes == 4)) printf("aries\n");
    else if ((dia >= 21 && mes == 4) || (dia <= 20 && mes == 5)) printf("touro\n");
    else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6)) printf("gemeos\n");
    else if ((dia >= 21 && mes == 6) || (dia <= 22 && mes == 7)) printf("cancer\n");
    else if ((dia >= 23 && mes == 7) || (dia <= 22 && mes == 8)) printf("leao\n");
    else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9)) printf("virgem\n");
    else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10)) printf("libra\n");
    else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11)) printf("escorpiao\n");
    else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12)) printf("sagitario\n");
    else if ((dia >= 22 && mes == 12) || (dia <= 19 && mes == 1)) printf("capricornio\n");
    else if ((dia >= 20 && mes == 1) || (dia <= 18 && mes == 2)) printf("aquario\n");
    else printf("peixes\n");
    return 0;
}