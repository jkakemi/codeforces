#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    int sum=0;
    int favoraveis=0;
    for(int i=1; i<=6; i++){
        for(int j=1; j<=6; j++){
            for(int k=1; k<=6; k++){
                sum = i+j+k;
                if(sum == n){
                    favoraveis++;
                }
            }
        }
    }

    cout << fixed << setprecision(12) << (double)favoraveis/216 << endl;

    return 0;
}
