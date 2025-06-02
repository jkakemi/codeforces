#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
const int MOD = 1e9 + 7;

void addArestaDupla(int u, int v, int w, vector<pair<int, int>> adjCaminhada[]){
    adjCaminhada[u].push_back({v, w});
    adjCaminhada[v].push_back({u, w});
}

void addArestaUnica(int u, int v, int w, vector<pair<int, int>> adjCarro[]){
    adjCarro[u].push_back({v, w});
}

vector<long long> dijkstra(int origem, int V, vector<pair<int, int>> adj[]){
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;

    vector<long long> dist(V+1, LLONG_MAX);

    if(origem >= 1 && origem <= V){
        q.push({0, origem});
        dist[origem] = 0;
    }
    else{
        return dist;
    }

    while(!q.empty()){
        int u = q.top().second;
        long long custoAtual = q.top().first;
        q.pop();

        // evitar botar a mesma esquina várias vezes
        if(custoAtual > dist[u]) continue;

        if(dist[u] == LLONG_MAX) continue;
        // PERCORRER SOMENTE POR CAMINHADA PRIMEIRO
        for(auto x : adj[u]){
            int v = x.first;
            int peso = x.second;

            if(dist[v] > dist[u]+peso){
                dist[v] = dist[u]+peso;
                q.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n, cUnica, pCalcada; cin >> n >> cUnica >> pCalcada;

    vector<pair<int, int>> adjCarro[n+1];
    vector<pair<int, int>> adjCaminhada[n+1];

    for(int i=0; i<cUnica; i++){
        int u, v, w;
        cin >> u >> v >> w;
        addArestaUnica(u, v, w, adjCarro);
    }

    for(int i=0; i<pCalcada; i++){
        int u, v, w;
        cin >> u >> v >> w;
        addArestaDupla(u, v, w, adjCaminhada);
    }

    // Como o exercicio pede para que o ponto de origem até X deve ser caminhada
    // e Y até N deve também deve ser caminhada, ja tem pronto o custo de cada
    // um dessas arestas
    vector<long long> custo1_X = dijkstra(1, n, adjCaminhada);

    vector<long long> custoY_N = dijkstra(n, n, adjCaminhada);

    // Parte do UBERaba
    vector<long long> uber(n+1, LLONG_MAX);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> qUber;
    for(int i=1; i<=n; i++){
        if(custo1_X[i] != LLONG_MAX){
            uber[i] = custo1_X[i];
            qUber.push({uber[i], i});
        }
    }

    // Agora o dijkstra do UBERaba
    while(!qUber.empty()){
        long long distAtual = qUber.top().first;
        int u = qUber.top().second;

        qUber.pop();

        if(distAtual > uber[u]) continue;

        for(const auto& e : adjCarro[u]){
            int v = e.first;
            int peso = e.second;

            if(uber[u] != LLONG_MAX && v >= 1 && v<=n){
                if(uber[v] > uber[u]+peso){
                    uber[v] = uber[u]+peso;
                    qUber.push({uber[v], v});
                }
            }
        }
    }

    long long tempoMinimo = LLONG_MAX;

    // possibilidade de ir todo o trajeto apé
    if(custo1_X[n] != LLONG_MAX){
        tempoMinimo = custo1_X[n];
    }

    for(int i=1; i<=n; i++){
        long long custoY = uber[i];
        long long custoFinalY_N = custoY_N[i];

        if(custoY != LLONG_MAX && custoFinalY_N != LLONG_MAX){
            long long tempoTotal = custoY + custoFinalY_N;
            
            if(tempoTotal < tempoMinimo){
                tempoMinimo = tempoTotal;
            }
        }
    }

    cout << tempoMinimo << endl;

    return 0;
}