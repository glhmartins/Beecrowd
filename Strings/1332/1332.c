#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char x[5];
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%s", &x);
        if (strlen(x) == 5) {
            printf("3\n");
            continue;
        } else if (x[0] == 'o' && x[1] == 'n') {
            printf("1\n");
            continue;
        } else if (x[0] == 'o' && x[2] == 'e') {
            printf("1\n");
            continue;
        } else if (x[1] == 'n' && x[2] == 'e') {
            printf("1\n");
            continue;
        } else printf("2\n");
    } 
    return 0;
}