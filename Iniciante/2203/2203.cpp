#include <bits/stdc++.h>

using namespace std;

double distancia_pontos(int xf, int yf, int xi, int yi){
    return sqrt(pow(xf-xi,2)+pow(yf-yi,2));
}

char acerta(double distancia, int velocidade, int conjuracao, int voo){
    double ataque = distancia - conjuracao - voo + velocidade*1.5;
    if (ataque<=0) return 'Y';
    return 'N';
}

void converte(string entrada, vector<int> &saida){
    istringstream iss(entrada);
    string numero;
    while(iss >> numero) saida.push_back(stoi(numero));
}

int main(){
    double dist;
    string entrada;
    while(getline(cin, entrada)){
        if(entrada.empty()) continue; 
        vector<int> situacao;
        converte(entrada, situacao);
        dist = distancia_pontos(situacao[0], situacao[1], situacao[2], situacao[3]);
        cout << acerta(dist, situacao[4], situacao[5], situacao[6]) << endl;
    }
    return 0;
}