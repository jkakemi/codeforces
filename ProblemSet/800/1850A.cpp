#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int cases; cin >> cases;

    while(cases--){
        int a, b, c;
        cin >> a >> b >> c;

        if(a+b >= 10 || a+c >= 10 || b+c >= 10){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    
    return 0;
}
