#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int cases; cin >> cases;
    string cf = "codeforces";

    while(cases--){
        char c; cin >> c;

        char n = cf.find(c);
        if(string::npos == n) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}