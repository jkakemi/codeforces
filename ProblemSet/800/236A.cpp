#include <bits/stdc++.h>

using namespace std;

int main(){

    string frase;

    set<char> caracteres;

    cin >> frase;

    for(char c : frase){
        caracteres.emplace(c);
    }

    if(caracteres.size()%2 == 0){
        cout << "CHAT WITH HER!\n"; 
    }
    else{
        cout << "IGNORE HIM!\n";
    }

    return 0;
}