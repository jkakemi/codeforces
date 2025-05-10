#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int cases; cin >> cases;

    while(cases--){
        string number; cin >> number;

        int result1=0;
        int result2=0;
        for(int i=0; i<3; i++){
            result1 += (number[i]-'0');
        }
        for(int i=3; i<6; i++){
            result2 += (number[i]-'0');
        }

        if(result1 == result2){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
