#include <bits/stdc++.h>

using namespace std;

int main(){

    string a, b;

    cin >> a >> b;

    string c;

    copy(a.rbegin(), a.rend(), back_inserter(c));

    if(c == b){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}