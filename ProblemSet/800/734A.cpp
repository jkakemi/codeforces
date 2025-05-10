#include <bits/stdc++.h>

using namespace std;

int main(){

    int number;
    vector<char> partida;

    cin >> number;
    while(number--){
        char p;
        cin >> p;
        partida.push_back(p);
    }

    int d=0, a=0;
    for(char pa : partida){
        if(pa == 'D'){
            d++;
        }
        else{
            a++;
        }
    }

    if(d == a){
        cout << "Friendship\n"; 
    }
    else if(d > a){
        cout << "Danik\n";
    }
    else{
        cout << "Anton\n";
    }

    

    return 0;
}