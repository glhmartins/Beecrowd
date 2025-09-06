#include <stdio.h>

int main(){
    double a,g,ra,rg, ca, cg;
    scanf("%lf %lf %lf %lf", &a, &g, &ra, &rg);
    ca = ra/a;
    cg = rg/g;
    if (ca>cg){
        printf("A\n");
    }
    else{
        printf("G\n");
    }
    return 0;
}