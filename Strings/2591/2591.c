#include <stdio.h>

int main(){
    int n, x = 0, y = 0, start, z;
    char word[201];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%s", &word);
        printf("k");
        for (int j = 0; j < sizeof(word); j++){
            start = j+1;
            if (word[j] == 'a'){
                x++;
            }
            else if (word[j] == 'k'){
                break;
            }
        }
        for (int k = start; k < sizeof(word); k++){
            if (word[k] == 'a'){
                y++;
            }
            else if (word[k] == 'm'){
                break;
            }
        }
        z = x*y;
        for (int l = 0; l < z; l++){
            if (l == z-1){
                printf("a\n");
            }
            else{
            printf("a");
            }
        }
        x = 0;
        y = 0;
    }
    return 0;
}