#include <stdio.h>

int main(){
    int todos, visitados, x, count = 0, condition = 0;
    scanf("%d %d", &todos, &visitados);
    int vistos[todos+visitados];
    for (int i = 0; i < visitados; i++){
        scanf("%d", &vistos[i]);
    }
    for (int j = 0; j < todos; j++){
        scanf("%d", &x);
        for (int k = 0; k<visitados+count; k++){
            if (x == vistos[k]){
                condition = 1;
                break;
            }
        }
        if (condition == 0){
            printf("1\n");
            vistos[visitados+count] = x;
            count++;
        }
        else{
            printf("0\n");
        }
        condition = 0;
    }
    return 0;
}