#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b;

    cin >> a >> b;
    string num = to_string(a);
    
    while(b--){
        if(num.back() != '0'){
            num.back()--;
        }
        else{
            num.pop_back();
        }
    }

    cout << num << endl;


    return 0;
}