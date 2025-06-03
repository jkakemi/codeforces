#include <bits/stdc++.h>

using namespace std;

vector<int> pai;
int cont=0;
int find(int x){ 
    if(pai[x] != x)  
        pai[x] = find(pai[x]);   
    return pai[x]; 

} 

void unir(int i, int j){ 
    int a = find(i), b = find(j); 
    if(a != b){ 
        cont++;
        pai[b] = a;  
    } 
} 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n; cin >> n;
    pai.resize(n+1);
    int doces_baguncados=0;
    set<int> regioes;
    for(int i=1; i<=n; i++) pai[i] = i;

    while(n--){
        int u, v; cin >> u >> v;
        if(u != v){
            doces_baguncados++;
            regioes.insert(u);
            regioes.insert(v);
            unir(u, v);
        }
    }

    int panelinhas=0;
    if(!regioes.empty()){
        panelinhas = regioes.size()-cont;
    }
    if(doces_baguncados == 0) cout << 0 << endl;
    else cout << doces_baguncados-panelinhas << endl;

    return 0;
}