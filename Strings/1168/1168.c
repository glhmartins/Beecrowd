#include <stdio.h>
#include <string.h>

int main(){
    int n, leds = 0;
    char digitos[100];
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        scanf("%s", &digitos);
        leds = 0;
        for (int j = 0; j<strlen(digitos); j++){
            if (digitos[j] == '0'){
                leds += 6;
            } else if (digitos[j] == '1'){
                leds += 2;
            } else if (digitos[j] == '2'){
                leds += 5;
            } else if (digitos[j] == '3'){
                leds += 5;
            } else if (digitos[j] == '4'){
                leds += 4;
            } else if (digitos[j] == '5'){
                leds +=5;
            } else if (digitos[j] == '6'){
                leds += 6;
            } else if (digitos[j] == '7'){
                leds += 3;
            } else if (digitos[j] == '8'){
                leds += 7;
            } else leds += 6;
        }
        printf("%d leds\n", leds);
    }
    return 0;
}