#include <bits/stdc++.h>

using namespace std;

string escolher(int h, int d, int g){
    if ((h>=200 && h<=300) && (d>=50) && (g>=150)) return "Sim";
    return "Nao";
}

int main(){
    int n, h, d, g;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> h >> d >> g;
        cout << escolher(h,d,g) << endl;
    }
    return 0;
}
