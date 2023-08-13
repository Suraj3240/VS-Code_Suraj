#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &adj, vector<bool> &visited, int u)
{
    cout << u << " ";
    visited[u] = true;
    for (auto v : adj[u])
    {
        if (!visited[v])
        {
            dfs(adj, visited, v);
        }
    }
}

int main()
{
    int n, m;
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(n + 1, 0);
    for (int i = 1; i < n; i++)
    {
        if (!visited[i])
        {
            cout << endl;
            dfs(adj, visited, i);
        }
    }
    return 0;
}