#include <stdio.h>

int main(){
    float b,c,e,f;
    int n1,n2;
    scanf("%d %f %f", &n1, &b, &c);
    scanf("%d %f %f", &n2, &e, &f);
    c /= 3.6;
    f /= 3.6;
    while (b>0 && e>0){
        b -=c;
        e -=f;
    }
    if (b<=0 && e<=0){
        if(b<e){
            printf("%d\n", n1);
        }
        else{
            printf("%d\n", n2);
        }
    }
    else if (b<=0){
        printf("%d\n", n1);
    }
    else{
        printf("%d\n", n2);
    }
    return 0;
}