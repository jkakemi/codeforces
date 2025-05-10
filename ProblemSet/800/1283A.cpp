#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;

    while(n--){
        int a, b; cin >> a >> b;

        int hour_minutes = (24-a)*60;
        int minutes_total = hour_minutes-b;

        cout << minutes_total << endl;
    }

    return 0;
}
