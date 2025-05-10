#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int cases; cin >> cases;

    int sum=0;
    while(cases--){
        string word; cin >> word;
        
        if(word == "Icosahedron") sum += 20;
        else if(word == "Dodecahedron") sum += 12;
        else if(word == "Octahedron") sum += 8;
        else if(word == "Cube") sum += 6;
        else if(word == "Tetrahedron") sum +=4;
    }

    cout << sum << endl;

    return 0;
}