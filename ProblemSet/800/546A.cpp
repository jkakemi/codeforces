#include <bits/stdc++.h>

using namespace std;

int main(){

    int k, n, w;

    cin >> k >> n >> w;

    int banana = 0;
    for(int i=1; i<=w; i++){
        banana += i*k;

    }

    cout << max(0, banana - n) << endl;

    return 0;
}