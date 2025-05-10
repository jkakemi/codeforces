#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int cases; cin >> cases;

    bool flag = false;
    while(cases--){
        int x; cin >> x;
        if(x == 1){
            flag = true;
        }
        else{
            continue;
        }
    }

    if(flag) cout << "HARD\n";
    else cout << "EASY\n";

    return 0;
}