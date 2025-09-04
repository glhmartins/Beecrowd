#include <bits/stdc++.h>

using namespace std;

int main(){

    double raio, volume;
    const double PI = 3.14159;

    cin >> raio;

    volume = (4.0/3) * PI * pow(raio,3);

    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

    return 0;
}