#include <bits/stdc++.h>

using namespace std;

int MDC(int a, int b){
    if (a%b==0) return b;
    return MDC(b, a%b);
}

int main(){
    int n, a, b, aux;
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> a >> b;
        if (a>b) aux = MDC(a,b);
        else aux = MDC(b,a);
        cout << aux << endl;
    }
    return 0;
}