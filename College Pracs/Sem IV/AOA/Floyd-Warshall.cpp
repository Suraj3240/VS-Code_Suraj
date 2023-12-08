#include <bits/stdc++.h>
using namespace std;
#define inf 10000

void floydWarshall(vector<vector<int>> &graph, int n)
{
    for (int via = 0; via < n; via++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                graph[i][j] = min(graph[i][j], graph[i][via] + graph[via][j]);
            }
        }
    }
}

void print(vector<vector<int>> &graph, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (graph[i][j] == inf)
                cout << "INF ";
            else
                cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> graph;
    graph = {{0, 5, inf, 10}, {inf, 0, 3, inf}, {inf, inf, 0, 1}, {inf, inf, inf, 0}};
    int n = graph.size();
    floydWarshall(graph, n);
    print(graph, n);
    return 0;
}