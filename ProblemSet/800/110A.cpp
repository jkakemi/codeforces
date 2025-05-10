#include <bits/stdc++.h>

using namespace std;

int main(){

    string number;

    cin >> number;

    int cont=0;
    for(char c : number){
        if(c == '7' || c == '4'){
            cont++;    
        }
    }

    if(cont == 7 || cont == 4){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }



    return 0;
}