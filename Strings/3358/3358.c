#include <stdio.h>
#include <string.h>

int main(){
    int n, count = 0;
    char x[42];
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        scanf("%s", &x);

        for (int j = 0; j < strlen(x); j++){
            if (x[j]!= 'a' && x[j]!= 'e' && x[j]!= 'i' && x[j]!= 'o' && x[j]!= 'u' && x[j]!= 'A' && x[j]!= 'E' && x[j]!= 'I' && x[j]!= 'O' && x[j]!= 'U'){
                count++;
                if (count == 3){break;}
            }
            else {
                count = 0;
            }
        }
        if (count == 3){
            printf("%s nao eh facil\n", x);
        }
        else {
            printf("%s eh facil\n", x);
        }
        count = 0;
    }
    return 0;
}