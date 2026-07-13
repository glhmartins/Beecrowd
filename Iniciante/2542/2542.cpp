#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, l, cm, cl, atributo;
    while (cin >> n){
        cin >> m >> l;
        int marcos[m][n], leo[l][n];
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++) cin >> marcos[i][j];
        }
        for(int i = 0; i<l; i++){
            for(int j = 0; j<n; j++) cin >> leo[i][j];
        }
        cin >> cm >> cl;
        cm--;
        cl--;
        cin >> atributo;
        atributo--;
        if (marcos[cm][atributo]>leo[cl][atributo]) cout << "Marcos" << endl;
        else if (marcos[cm][atributo] == leo[cl][atributo]) cout << "Empate" << endl;
        else cout << "Leonardo" << endl;
    }
    return 0;
}