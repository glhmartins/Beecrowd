#include <stdio.h>
#include <math.h>

int main(){
    double n, bc, ac;
    while (scanf("%lf", &n) != 0){
        if (n == 0){
            break;
        }
        bc = floor(n/90);
        ac = ceil((7*n)/90);
        printf("Brasil %.0lf x Alemanha %.0lf\n", bc, ac);
        
    }
    return 0;
}