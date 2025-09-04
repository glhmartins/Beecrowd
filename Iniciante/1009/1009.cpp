#include <bits/stdc++.h>

using namespace std;

int main(){

    string name;
    double fixo, vendas, total;

    cin >> name >> fixo >> vendas;

    total = fixo+(vendas*0.15);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}