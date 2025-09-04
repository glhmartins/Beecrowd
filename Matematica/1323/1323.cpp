#include <bits/stdc++.h>

using namespace std;

int rec(int n){
    if (n == 0) return 0;
    return pow(n,2) + rec(n-1);
}

int main(){
    int n;
    cin >> n;
    while (n!=0){
        n = rec(n);
        cout << n << endl;
        cin >> n;
    }
    return 0;
}