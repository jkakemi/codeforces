#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    
    int x = n;
    int soma=0;
    while(n--){
        int a;
        cin >> a;
        soma+=a;
    }

    double media = (double)soma/x;

    cout << fixed << setprecision(12) << media << endl;
    

    return 0;
}