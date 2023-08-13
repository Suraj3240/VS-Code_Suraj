#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;
    unordered_map<int, vector<int>> adj;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Comment this line for directed graph
    }
    int source;
    cout << "Enter the source node: ";
    cin >> source;
    queue<int> q;
    unordered_map<int, bool> visited;
    q.push(source);
    visited[source] = true;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (auto i : adj[node])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
    // For disconnected graph, if any node is not visited, then call BFS on that node
    // Here we assume all the nodes are numbered from 1 to n
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            cout << endl;
            q.push(i);
            visited[i] = true;
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                cout << node << " ";
                for (auto i : adj[node])
                {
                    if (!visited[i])
                    {
                        q.push(i);
                        visited[i] = true;
                    }
                }
            }
        }
    }

    return 0;
}