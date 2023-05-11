// Find shortest distance from source to destiation using Bellman Ford algo
// Single source shortest path
// Works on negative edges as well.

// graph example is taken from "https://www.javatpoint.com/bellman-ford-algorithm"

#include <bits/stdc++.h>
using namespace std;

vector<int> bellman_ford(vector<vector<int>> graph, int src, int dest, int n, int m)
{
    vector<int> dist(n + 1, 1e5);
    dist[src] = 0;
    // iterate (n-1) times
    for (int i = 1; i < n; i++)
    {
        // iterate over all edges (n-1) times
        for (int j = 0; j < m; j++)
        {
            int u = graph[j][0];
            int v = graph[j][1];
            int wt = graph[j][2];
            if (dist[v] > dist[u] + wt)
                dist[v] = dist[u] + wt;
        }
    }
    return dist;
}

int main()
{
    vector<vector<int>> graph;
    graph = {{1, 2, 6}, {1, 3, 4}, {1, 4, 5}, {2, 5, -1}, {3, 2, -2}, {3, 5, 3}, {4, 3, -2}, {4, 6, -1}, {5, 6, 3}};

    unordered_set<int> s;
    for (auto i : graph)
    {
        s.insert(i[0]);
        s.insert(i[1]);
    }
    int n = s.size();     // no of vertices
    int m = graph.size(); // no of edges
    vector<int> dist = bellman_ford(graph, 1, 6, n, m);
    for (auto i : dist)
    {
        if (i == 1e5)
            continue;
        cout << i << " ";
    }
    cout << endl;
    cout << "Distance from source "
         << 1
         << " to destination " << 6 << " is: " << dist[n];
    return 0;
}