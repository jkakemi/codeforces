#include <bits/stdc++.h>

using namespace std;

void addAresta(int u, int v, int w, vector<vector<pair<int, int>>>& grafo){
    grafo[u].push_back({v, w});
    grafo[v].push_back({u, w});
}

vector<long long> restore_path(int s, int t, vector<int>& p) {
    vector<long long> path;

    for (int v = t; v != s; v = p[v])
        path.push_back(v);
    path.push_back(s);

    reverse(path.begin(), path.end());
    return path;
}

void dijkstra(int v, int n, vector<vector<pair<int, int>>>& grafo){
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;
    vector<int> pai(n+1, 0);
    vector<long long> dist(n+1, LLONG_MAX);

    dist[v] = 0;
    q.push({0LL, v});

    while(!q.empty()){
        int u = q.top().second;
        int d_u = q.top().first;
        q.pop();
        
        // otimização
        if(d_u > dist[u]) continue;

        for(auto& x : grafo[u]){
            int v = x.first;
            int peso = x.second;

            if(dist[v] > dist[u]+peso){
                dist[v] = dist[u]+peso;
                pai[v] = u;
                q.push({dist[v], v});
            }
        }
    }

    if(dist[n] == LLONG_MAX) cout << -1 << endl;
    else{
        vector<long long> path = restore_path(v, n, pai);
        for(size_t i=0; i<path.size(); i++){
            if(i > 0) cout << " ";
            cout << path[i];
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n, m; cin >> n >> m;

    vector<vector<pair<int, int>>> grafo(n+1);

    for(int i=0; i<m; i++){
        int u, v, w; cin >> u >> v >> w;
        addAresta(u, v, w, grafo);
    }

    dijkstra(1, n, grafo);

    
    return 0;
}