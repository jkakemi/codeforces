#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int cases; cin >> cases;

    string word = "";

    while(cases--){
        char w; cin >> w;
        word += w;
    }

    int cont=0;
    for(int i=0; i<word.size(); i++){
        if(word[i] == word[i+1]){
            cont++;
        }
    }

    cout << cont << endl;

    return 0;
}