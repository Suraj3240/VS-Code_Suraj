#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

const int N = 1e5 + 5;

int parent[N];
int sz[N];

void make(int v)
{
    parent[v] = v;
    sz[v] = 1;
}

int find(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find(parent[v]);
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        make(i);
    }
    while (k--)
    {
        int u, v;
        cin >> u >> v;
        Union(u, v);
    }
    // find number of connected components
    int connectedComponents = 0;
    for (int i = 1; i <= n; i++)
    {
        if (parent[i] == i)
            connectedComponents++;
    }
    cout << connectedComponents << endl;

    return 0;
}