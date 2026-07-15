#include <iostream>

using namespace std;

int main(){
    int n, x, y, res;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> x >> y;
        if (y>x){
            cout << x << endl;
            continue;
        }
        res = x/y + x%y;
        cout << res << endl;
    }
    return 0;
}