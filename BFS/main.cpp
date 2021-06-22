///BFS.
///O(n+m) time, where n is number of vertices and m is the number of edges.

#include <bits/stdc++.h>

using namespace std;
vector<int> adj[1000];
vector<int> p;
int s;
int n;

void pgraph() {
    for (int i = 0; i < p.size(); i++)
        cout << p[i] << " ";
}

void bfs() {
    int u;
    queue<int> q;
    vector<bool> used(n + 5);
    q.push(s);
    used[s] = true;
    p.push_back(s);
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (u = 0; u < adj[v].size(); u++) {
            if (!used[adj[v][u]]) {
                //cout<<"aa"<<adj[v][u]<<endl;
                used[adj[v][u]] = true;
                p.push_back(adj[v][u]);
                q.push(adj[v][u]);
            }
        }
    }
}

int main() {
    int node, edge, i, j, a, b;
    cin >> node >> edge;
    cout << node << " " << edge << endl;
    for (i = 1; i <= edge; i++) {
        cout << i << endl;
        cin >> a >> b;
        adj[a].push_back(b);
        //adj[b].push_back(a);
    }
    cin >> s;
    n = node;
    bfs();
    pgraph();
    return 0;
}
