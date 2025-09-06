#include <stdio.h>

int main(){
    int a, b, c, n, m;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d", &n, &m);
    if (n>=b && m>=a) printf("S\n");
    else if (n>=b && m>=c) printf("S\n");
    else if (m>=a && n>=c) printf("S\n");
    else if (m>=c && n>=a) printf("S\n");
    else if (m>=b && n>=c) printf("S\n");
    else if (m>=b && n>=a) printf("S\n");
    else printf("N\n");
    return 0;
}