#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int cases; cin >> cases;

    while(cases--){
        string one, two;

        cin >> one >> two;

        cout << two[0] << one[1] << one[2] << " " << one[0] << two[1] << two[2] << endl;
    }

    return 0;
}