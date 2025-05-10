#include <bits/stdc++.h>

using namespace std;

bool ehTres(int i){
    return i%3!=0 && i%10!=3;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int cases; cin >> cases;

    while(cases--){
        int n; cin >> n;
        int i=1;
        int cont=0;
        while(true){
            if(!ehTres(i)){
                i++;
                continue;
            }

            cont++;
            if(cont==n){
                cout << i << endl;
                break;
            }

            i++;
        }
    }

    return 0;
}