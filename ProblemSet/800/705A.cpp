#include <bits/stdc++.h>

using namespace std;

int main(){

    int number;

    cin >> number;

    for(int i=1; i<=number; i++){
        if(i%2 == 0){
            if(i == number){
                cout << "I love it\n";
            }
            else{
                cout << "I love that ";
            }
        }
        else if(i%2 != 0){
            if(i == number){
                cout << "I hate it\n";
            }
            else{
                cout << "I hate that ";
            }
        }
    }

    return 0;
}