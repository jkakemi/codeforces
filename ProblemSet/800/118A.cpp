#include <bits/stdc++.h>

using namespace std;

int main(){

    string word;

    cin >> word;

    string new_word = "";

    transform(word.begin(), word.end(), word.begin(), ::tolower);
    for(int i=0; i<word.size(); i++){
        if((word[i] != 'A' && word[i] != 'a') && (word[i] != 'E' && word[i] != 'e')
            && (word[i] != 'I' && word[i] != 'i') && (word[i] != 'O' && word[i] != 'o')
            && (word[i] != 'U' && word[i] != 'u') && (word[i] != 'Y' && word[i] != 'y')){
                new_word = new_word + '.' + word[i];
            }
    }

    cout << new_word << endl;
    return 0;
}