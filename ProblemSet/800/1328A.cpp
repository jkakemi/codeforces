#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases;

    cin >> cases;

    while(cases--){
        int a, b;
        cin >> a >> b;
        // while(b-a%b != 0){
        //     a++;
        //     cont++;
        // }

        if(a%b == 0){
            cout << "0\n";
        }
        else{
            cout << b-a%b << endl;
        }
    }

    return 0;
}