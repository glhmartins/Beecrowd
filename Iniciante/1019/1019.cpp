#include <bits/stdc++.h>

using namespace std;

int main(){
    int s, horas, minutos, segundos;
    cin >> s;
    horas = s/3600;
    minutos = (s%3600)/60;
    segundos = (s%3600)%60;
    cout << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}