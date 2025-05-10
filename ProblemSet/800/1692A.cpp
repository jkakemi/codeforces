#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    while(n--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        map<int, char, greater<int>> competidores;

        competidores[a] = 'a';
        competidores[b] = 'b';
        competidores[c] = 'c';
        competidores[d] = 'd';

        int i=0;
        for(const auto& com : competidores){
            if(com.second == 'a'){
                break;
            }
            else{
                i++;
            }
        }

        cout << i << endl;

    }

    return 0;
}
