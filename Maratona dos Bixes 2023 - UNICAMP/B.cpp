#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n, m; cin >> n >> m;

    int a = pow(m, 2)-pow(n, 2);
    int b = 2*(n*m);
    int c = pow(m, 2)+pow(n, 2);

    cout << abs(a) << " " << b << " " << c << endl;
    
    return 0;
}