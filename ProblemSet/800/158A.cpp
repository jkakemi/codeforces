#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k;

    cin >> n >> k;

    vector<int> pontuacao(n);

    for(int i=0; i<n; i++){
        int p;
        cin >> p;
        pontuacao[i] = p; 
    }

    sort(pontuacao.begin(), pontuacao.end(), greater<int>());
    
    int cont=0;
    for(int i=0; i<n; i++){
        if(pontuacao[i] >= pontuacao[k-1] && pontuacao[i] > 0){
            cont++;
        }
    }

    cout << cont << endl;

    return 0;
}