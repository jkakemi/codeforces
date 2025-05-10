#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int cases; cin >> cases;

    while(cases--){
        long long int n; cin >> n;

        if(n == 1 || n == 2){
            cout << "0\n";
            continue;
        }
        
        cout << (n-1)/2 << endl;
    }

    return 0;
}
