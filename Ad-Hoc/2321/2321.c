#include <stdio.h>

int main(){
    int x0, y0, x1, y1, x2, y2, x3, y3;
    scanf("%d %d %d %d", &x0, &y0, &x1, &y1);
    scanf("%d %d %d %d", &x2, &y2, &x3, &y3);
    if (x0<=x3 && x3<=x1 && y0<=y2  && y2<=y1){
        printf("1\n");
    }
    else if (x0<=x2 && x2<=x1 && y0<=y2 && y2<=y1){
        printf("1\n");
    }
    else if (x0<=x2 && x2<=x1 && y2>y1){
        printf("1\n");
    }
    else if (x0<=x2 && x2<=x1 && y2<y0){
        printf("1\n");
    }
    else if (x0<=x2 && x2<=x1 && y0<=y3 && y3<=y1){
        printf("1\n");
    }
    else if (x0<=x3 && x3<=x1 && y0<=y3 && y3<=y1){
        printf("1\n");
    }
    else if (x0<=x3 && x3<=x1 && y3>y1){
        printf("1\n");
    }
    else if (x0<=x3 && x3<=x1 && y3<y0){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
}