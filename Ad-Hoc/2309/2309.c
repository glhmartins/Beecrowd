#include <stdio.h>

int main(){
    int n, t = 0, m = 0, pontos[] = {0,8,9,10,1,2,3,4,0,0,0,6,5,7}, r_t[3], r_m[3], rt = 0, rm = 0, pt, pm;
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        scanf("%d %d %d %d %d %d", &r_t[0], &r_t[1], &r_t[2], &r_m[0], &r_m[1], &r_m[2]);
        rt = 0;
        rm = 0;
        for (int j = 0; j<3; j++){
            pt = pontos[r_t[j]];
            pm = pontos[r_m[j]];
            if (pt>=pm){
                rt++;
            }
            else{
                rm++;
            }
        }
        if (rt>rm){
            t++;
        }
        else {
            m++;
        }
    }
    printf("%d %d\n", t,m);
    return 0;
}