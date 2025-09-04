#include <stdio.h>

unsigned long long int fatorial(int n){
    unsigned long long int fat = n;
    if (fat<=1){
        fat = 1;
    } else {
        fat *= fatorial(fat-1);
    }
    return fat;
}

int main(){
    int n1,n2;
    unsigned long long int fat1, fat2;
    while (scanf("%d %d", &n1, &n2) != EOF){
        fat1 = fatorial(n1);
        fat2 = fatorial(n2);
        printf("%llu\n", fat1+fat2);
    }
    return 0;
}