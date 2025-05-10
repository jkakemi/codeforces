#include <bits/stdc++.h>

using namespace std;

int main(){


    string frase;

    cin >> frase;

    if(islower(frase[0])){
        frase[0] = toupper(frase[0]);
    }

    cout << frase << endl;

    return 0;
}