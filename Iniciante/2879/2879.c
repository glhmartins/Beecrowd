#include <stdio.h>

int main(){
    int n, x, sum = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &x);
        if (x != 1) sum++;
    }
    printf("%d\n", sum);
    return 0;
}