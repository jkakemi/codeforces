#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;

    if(n >= 2){
        cout << "25\n";
    }
    else{
        cout << (long long)pow(5, n)%100 << endl;
    }
    
    return 0;
}