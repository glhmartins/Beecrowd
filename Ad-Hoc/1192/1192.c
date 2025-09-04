#include <stdio.h>
 
int main() {
 
    int n, n1, n2;
    char l[4], a[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        scanf("%s", &l);
        n1 = l[0] - '0';
        n2 = l[2] - '0';
        if (n1 == n2){ 
            printf("%d\n", n1*n2);
        } else if ('A' <= l[1] && l[1] <= 'Z'){
            printf("%d\n", n2-n1);
        } else printf("%d\n", n2+n1);
    }
    return 0;
}