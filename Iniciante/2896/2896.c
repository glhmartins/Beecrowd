#include <stdio.h>

int main(){
    int n, x, y, res;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d %d", &x, &y);
        if (y>x){
            printf("%d\n", x);
            continue;
        }
        res = x/y + x%y;
        printf("%d\n", res);
    }
    return 0;
}