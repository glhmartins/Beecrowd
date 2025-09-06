#include <stdio.h>

int main(){
    int n,m, people = 0, x,y;
    char condition[2] = "N";
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        people-=x;
        people+=y;
        if (people>m){
            condition[0] = 'S';
        }
    }
    printf("%s\n", condition);
    return 0;
}