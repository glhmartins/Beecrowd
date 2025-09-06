#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m, teste = 1, maior = INT32_MIN, menor = INT32_MAX, aux = 0;
    cin >> n >> m;
    while (n!=0 && m!=0){
        int *vet = (int*) malloc(sizeof(int) * n);
        for (int i = 0; i<n; i++) cin >> vet[i];
        for (int i = 0; i<=n-m; i++){
            aux = 0;
            for (int j = i; j<i+m; j++) aux += vet[j];
            maior = max(maior, aux/m);
            menor = min(menor, aux/m);
        }
        cout << "Teste " << teste << endl << menor << " " << maior << endl << endl;
        teste++;
        cin >> n >> m;
        free(vet);
        maior = INT32_MIN;
        menor = INT32_MAX;
    }
    return 0;
}