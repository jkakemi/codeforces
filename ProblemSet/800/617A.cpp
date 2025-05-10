#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin >> n;

    vector<int> steps = {5, 4, 3, 2, 1};
    int cont=0;
    int i=0;
    while(n != 0){
        if(steps[i] <= n){
            n -= steps[i];
            cont++;
        }
        else{
            i++;
        }
    }

    cout << cont << endl;

    return 0;
}