#include<bits/stdc++.h>
using namespace std;

vector<list<pair<int,int>>> gr;

// pair = {node, weight}
void add_edge(int u, int v, int wt, bool birdir = true) {
    gr[u].push_back({v, wt});
    if (birdir) {
        gr[v].push_back({u, wt});
    }
}

// Min Heap (sort according to weight)

struct cmp {
    bool operator()(pair<int,int> a, pair<int,int> b) {
        return a.second > b.second;
    }
};

vector<int> Dijkstra(int src, int n) {

    vector<int> dist(n, INT_MAX);

    // pair = {node, distance}
    priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;

    dist[src] = 0;
    pq.push({src, 0});

    while (!pq.empty()) {

        int curr_node = pq.top().first;
        int curr_dist = pq.top().second;
        pq.pop();

        // Ignore outdated entries
        if (curr_dist > dist[curr_node])
            continue;

        for (auto neigh : gr[curr_node]) {

            int next_node = neigh.first;
            int wt = neigh.second;

            if (curr_dist + wt < dist[next_node]) {

                dist[next_node] = curr_dist + wt;
                pq.push({next_node, dist[next_node]});
            }
        }
    }

    return dist;
}

int main() {

    int n, m;
    cin >> n >> m;

    gr.resize(n);

    for (int i = 0; i < m; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        add_edge(u, v, wt);
    }

    int src;
    cin >> src;

    vector<int> dist = Dijkstra(src, n);

    for (int i = 0; i < n; i++) {
        if (dist[i] == INT_MAX)
            cout << "INF ";
        else
            cout << dist[i] << " ";
    }

    cout << endl;

    return 0;
}