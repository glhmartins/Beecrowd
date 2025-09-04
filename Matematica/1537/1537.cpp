#include <bits/stdc++.h>

using namespace std;

unsigned long long fatorial(int n){
    if (n <= 3) return 1;
    return (n*fatorial(n-1))%1000000009;
}

int main(){
    unsigned long long n;
    cin >> n;
    while (n!=0){
        n = fatorial(n);
        cout << n << endl;
        cin >> n;
    }
    return 0;
}