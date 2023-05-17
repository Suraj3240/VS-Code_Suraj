#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter no of nodes: ";
    int n;
    cin >> n;
    cout << "Enter the adjacency matrix: \n";
    int cost[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> cost[i][j];
            if (cost[i][j] == 0)
                cost[i][j] = 1000; // infinity
        }
    }
    int visited[10] = {0};
    visited[0] = 1;
    int total = 1;
    int mini = INT_MAX;
    int u, v;
    int minCost = 0;
    cout << endl;
    while (total < n)
    {
        mini = 1000;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (cost[i][j] < mini && visited[i] != 0)
                {
                    mini = cost[i][j];
                    u = i;
                    v = j;
                }
            }
        }
        if (visited[u] == 0 || visited[v] == 0)
        {
            cout << "\nEdge " << total++ << ": "
                 << "(" << u + 1 << " " << v + 1 << ")   cost: " << mini;
            minCost += mini;
            visited[v] = 1;
        }
        cost[u][v] = cost[v][u] = 1000;
    }

    cout << "\n\nMinimum Cost: " << minCost;
    return 0;
}