#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adj;
    void addEdge(int u, int v, bool directed = 0)
    {
        // directed = 0 -> undirected
        // directed = 1 -> directed
        adj[u].push_back(v);
        if (!directed)
        {
            adj[v].push_back(u);
        }
    }
    void showGraph()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter no of nodes: ";
    cin >> n;
    int m;
    cout << "Enter no of edges: ";
    cin >> m;
    Graph g;
    // creating undirected graph
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 1);
    }
    g.showGraph();

    return 0;
}