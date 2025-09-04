#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float km, r;
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        scanf("%f %f", &km, &r);
        printf("%.0f\n", ceil(km/r));
    }
    return 0;
}