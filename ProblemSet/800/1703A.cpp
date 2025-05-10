#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin >> n;

    while(n--){
        string sim;
        cin >> sim;

        transform(sim.begin(), sim.end(), sim.begin(), ::tolower);

        if(sim == "yes"){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}