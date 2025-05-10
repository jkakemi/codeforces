#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int cases; cin >> cases;

    while(cases--){
        int a, b, c; cin >> a >> b >> c;

        if(a+b == c){
            cout << "+\n"; 
        }
        else{
            cout << "-\n";
        }
    }

    return 0;
}