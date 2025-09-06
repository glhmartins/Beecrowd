#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    x = (x%2==0) ? x+2:x+1;
    cout << x << endl;
    return 0;
}