#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n; cin >> n;

    while(n--){
        int x; cin >> x;

        if(x%3==0){
            cout << "Second\n";
        }
        else{
            cout << "First\n";
        }
    }

    return 0;
}