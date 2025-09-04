#include <stdio.h>

int main(){
    int n, dias = 0;
    double kg;
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        scanf("%lf", &kg);
        while (kg>1){
            kg /= 2.0;
            dias++;
        }
        printf("%d dias\n", dias);
        dias = 0;
    }
    return 0;
}