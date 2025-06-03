#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n, k, l, r; cin >> n >> k >> l >> r;

    int cadaCrianca = k%n;
    int div = k/n;
    if(cadaCrianca == 0 && (div >= l && div <= r)){
        cout << "S\n";
    }
    else cout << "N\n";

    return 0;
}