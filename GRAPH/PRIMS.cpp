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

// Custom comparator (sort by weigt) 

struct cmp {
    bool operator()(pair<int,int> a, pair<int,int> b) {
        return a.second > b.second;
    }
};

long long prims(int src, int n) {

    unordered_set<int> visited;
    vector<int> parent(n, -1);
    vector<int> minWt(n, INT_MAX);

    // pair = {node, weight}
    priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;

    pq.push({src, 0});
    minWt[src] = 0;

    long long ans = 0;

    while (!pq.empty()) {

        int curr_node = pq.top().first;
        int curr_wt   = pq.top().second;
        pq.pop();

        if (visited.count(curr_node))
            continue;

        visited.insert(curr_node);
        ans += curr_wt;

        for (auto neigh : gr[curr_node]) {

            int next_node = neigh.first;
            int wt = neigh.second;

            if (!visited.count(next_node) && wt < minWt[next_node]) {

                minWt[next_node] = wt;
                parent[next_node] = curr_node;

                pq.push({next_node, wt});
            }
        }
    }

    return ans;
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

    cout << prims(src, n);

    return 0;
}