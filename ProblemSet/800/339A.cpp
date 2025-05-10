#include <bits/stdc++.h>

using namespace std;

int main(){

    string conta;

    cin >> conta;

    vector<char> numeros;

    for(char c: conta){
        if(isdigit(c)){
            numeros.push_back(c);
        }
    }

    sort(numeros.begin(), numeros.end());

    for(int i=0; i<numeros.size(); i++){
        if(i > 0){ cout << "+"; }
        cout << numeros[i];
    }

    cout << endl;

    return 0;
}