// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int n; cin >> n;
//     vector<int> numbers = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//     while(n--){
//         int a, b; cin >> a >> b;
        
//         int i=0;
//         int cont=0;
//         while(a != b){
//             if(a < b){
//                 if(a+numbers[i] <= b){
//                     a += numbers[i];
//                     cont++;
//                 }
//                 else{
//                     i++;
//                 }
//             }
//             else{
//                 if(a-numbers[i] >= b){
//                     a -= numbers[i];
//                     cont++;
//                 }
//                 else{
//                     i++;
//                 }
//             }
//         }

//         cout << cont << endl;
//     }
    
//     return 0;
// }

// RESOLUÇÃO OTIMIZADA

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int diff = abs(a - b);
        cout << (diff + 9) / 10 << '\n';
    }

    return 0;
}
