#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    string word; cin >> word;

    int upper=0, lower=0;
    for(char w : word){
        if(isupper(w)){
            upper++;
        }
        else{
            lower++;
        }
    }

    if(upper < lower || upper == lower){
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }
    else{
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }

    cout << word << endl;

    return 0;
}