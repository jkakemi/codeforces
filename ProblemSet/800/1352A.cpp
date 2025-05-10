#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases;

    cin >> cases;

    while(cases--){
        int n;
        cin >> n;
        int cont=0;
        int resto=0;
        vector<int> separador;
        if(n < 11){
            cout << "1\n";
            cout << n << endl;
        }      
        else{
            if(n >= 10000){
                resto %= 10000;
            }
            if(n >= 1000){
                resto = n%1000;
                separador.push_back(n-resto);
                //separador.push_back(resto);
                cont++;
            }
            if(n >= 100){
                resto %= 100;
                separador.push_back(n-resto);
                separador.push_back(resto);
                cont++;
            }
            if(n >= 10){
                resto %= 10;
                separador.push_back(n-resto);
                separador.push_back(resto);
                cont++;
            }
        }  
        for(const auto& v : separador){
            cout << v << " ";
        }
        cout << endl;
    }
    

    return 0;
}