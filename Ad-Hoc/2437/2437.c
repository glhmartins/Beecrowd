#include <stdio.h>
#include <math.h>

int main(){
    int x1,y1,x2,y2, dist;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    dist = fabs(x2-x1) + fabs(y2-y1);
    printf("%d\n", dist);
    return 0;
}