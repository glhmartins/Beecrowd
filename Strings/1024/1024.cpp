#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    cin.get();
    for (int i = 0; i<n; i++){
        string s;
        getline(cin, s);
        for (int k = 0; k<s.size(); k++){
            if ((s[k]>=65 && s[k]<=90) || (s[k]>=97 && s[k]<=122)) s[k]+=3;
        }
        reverse(s.begin(), s.end());
        for (int j = s.size()/2; j<s.size(); j++) s[j] -= 1;
        cout << s << endl;
    }

    return 0;
}