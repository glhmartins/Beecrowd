#include <stdio.h>

int main(){
    int p,r;
    scanf("%d %d", &p, &r);
    if (p == 0) printf("C\n");
    else if (p == 1 && r == 1) printf("A\n");
    else printf("B\n");
    return 0;
}