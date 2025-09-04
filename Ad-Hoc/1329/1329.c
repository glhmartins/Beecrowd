#include <stdio.h>

int main(){
    int n, cara = 0, coroa = 0, x;
    scanf("%d", &n);
    while (n != 0){
        for (int i = 0; i < n; i++){
            scanf("%d", &x);
            if (x == 0){
                cara++;
            }
            else{
                coroa++;
            }
        }
        printf("Mary won %d times and John won %d times\n", cara, coroa);
        cara = 0;
        coroa = 0;
        scanf("%d", &n);
    }
    return 0;
}