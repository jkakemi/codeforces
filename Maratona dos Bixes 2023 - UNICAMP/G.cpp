#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    long long n; cin >> n;
    long long c; cin >> c;

    vector<long long> a(n);

    for(size_t i=0; i<n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    long long max=0;
    long long cont=0;
    for(size_t i=0; i<n; i++){
        if(max+a[i] <= c){
            cont++;
            max += a[i];
        }
    }
    
    cout << cont << endl;
    return 0;
}