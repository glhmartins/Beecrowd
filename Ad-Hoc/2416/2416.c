#include <stdio.h>

int main(){
    int metros, pistas;
    scanf("%d %d", &metros, &pistas);
    printf("%d\n", metros%pistas);
    return 0;
}