#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int n, count;
    string p1, p2;
    cin >> n;
    for(int i = 0; i<n; i++){
        count = 0;
        cin >> p1;
        cin >> p2;
        for(int j = 0; j<p1.size(); j++) {
            if(p1[j]>p2[j]) count += 26 - abs(p1[j]-p2[j]);
            else count += abs(p1[j]-p2[j]);
        }
        cout << count << endl;
    }
    return 0;
}
