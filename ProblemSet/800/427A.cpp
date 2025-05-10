#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int police = 0;
    int untreated = 0;

    for(int i = 0; i < n; ++i){
        int event;
        cin >> event;

        if(event == -1){
            if (police > 0)
                police--; 
            else
                untreated++;
        } else{
            police += event; 
        }
    }

    cout << untreated << '\n';
    return 0;
}
