#include <stdio.h>
 
int main() {
    int n, j1, j2, count = 1;
    char nome1[15], nome2[15];
    scanf("%d", &n);
    while (n != 0){
        scanf("%s", &nome1);
        scanf("%s", &nome2);
        printf("Teste %d\n", count);
        for (int i = 0; i<n; i++){
            scanf("%d %d", &j1, &j2);
            if ((j1+j2)%2 == 0) printf("%s\n", nome1);
            else printf("%s\n", nome2);
        }
        count++;
        printf("\n");
        scanf("%d", &n);
    }
    return 0;
}