#include <stdio.h>

int main(){
    int n, b50, b10, b5, b1, count = 1;
    scanf("%d", &n);
    while (n!=0){
        b50 = n/50;
        b10 = n%50/10;
        b5 = n%50%10/5;
        b1 = n%50%10%5;
        printf("Teste %d\n%d %d %d %d\n\n",count, b50, b10, b5, b1);
        count++;
        scanf("%d", &n);
    }
    return 0;
}