#include <stdio.h>

int main(){
    int pa_h, pa_m, cb_h, cb_m, pb_h, pb_m, ca_h, ca_m, pa, cb, pb, ca, fuso, tempo, voo1, voo2, condition = 0;
    scanf("%d:%d %d:%d %d:%d %d:%d", &pa_h ,&pa_m ,&cb_h ,&cb_m ,&pb_h ,&pb_m ,&ca_h ,&ca_m);
    pa = pa_h*60 + pa_m;
    cb = cb_h*60 + cb_m;
    pb = pb_h*60 + pb_m;
    ca = ca_h*60 + ca_m;
    if (pa>cb && pb>ca){
        cb+=1440;
        condition = 1;
    }
    voo1 = cb-pa;
    voo2 = ca-pb;
    if (voo1<0){
        voo1+=1440;
        condition = 1;
    }
    else if (voo2<0){
        voo2+=1440;
        condition = 1;
    }
    tempo = (voo1+voo2)/2;
    if (tempo<0){
        tempo+=720;
    }
    else if (tempo>720){
        tempo-=720;
    }
    fuso = voo1-tempo;
    if (fuso>720 && condition == 0){
        fuso-=720;
    }
    else if (fuso<=-720 && condition == 0){
        fuso+=720;
    }
    if (fuso>720 && condition == 1){
        fuso-=1440;
    }
    else if (fuso<=-720 && condition == 1){
        fuso+=1440;
    }
    printf("%d %d\n", tempo, fuso/60);
    return 0;
}