#include <stdio.h>

int main(){
    int n, g;
    float p, calc, cheap = 1001;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%f %d", &p, &g);
        calc = p/g;
        if(calc<cheap){
            cheap = calc;
        }
    }
    printf("%.2f\n", cheap*1000);
    return 0;
}