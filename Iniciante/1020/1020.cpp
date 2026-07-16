#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, anos, meses, dias;
    cin >> n;
    anos = n/365;
    n%=365;
    meses = n/30;
    dias = n%30;
    cout << anos << " ano(s)\n" << meses << " mes(es)\n" << dias << " dia(s)" << endl;
    return 0;
}