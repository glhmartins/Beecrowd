#include <stdio.h>

int fibonacci(int n, int *count){
    (*count)++;
    if (n == 0) return 0;
    if (n==1) return 1;
    return fibonacci(n-1, count) + fibonacci(n-2, count);
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        int m, count = 0;
        scanf("%d", &m);
        int *fib = (int *) malloc(sizeof(int) * m);
        fib[0] = 0;
        fib[1] = 1;
        for (int j = 2; j<m; j++){
            fib[j] = fib[j-1] + fib[j-2];
        }
        fibonacci(m, &count);
        printf("fib(%d) = %d calls = %d\n", m, count-1, fib[m-1]+fib[m-2]);
        free(fib); 
    }
    return 0;
}