#include <bits/stdc++.h>

using namespace std;

int main(){

    int c1, q1, c2, q2;
    double v1, v2, total;

    cin >> c1 >> q1 >> v1;
    cin >> c2 >> q2 >> v2;

    total = q1*v1 + q2*v2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}