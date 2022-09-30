#include <bits/stdc++.h>
using namespace std;
int dist[23];
bool vis[23];

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

void dfs(vector<int> adj[], int node, int d, int src)
{
    vis[node] = true;
    for (auto child : adj[node])
    {
        if (!vis[child])
        {
            dfs(adj, child, d + 1, src);
        }
        else if (child == src)
        {
            dist[child] = max(dist[child], d + 1);
        }
    }
    vis[node] = false;
}

int main()
{
    int V;
    cin >> V;
    memset(vis, false, sizeof(vis));
    memset(dist, false, sizeof(dist));
    vector<int> adj[V];
    for (int i = 0; i < V; ++i)
    {
        int to;
        cin >> to;
        if (to != -1)
        {
            addEdge(adj, i, to);
        }
    }
    for (int i = 0; i < V; ++i)
    {
        dfs(adj, i, 0, i);
    }
    int ans = INT_MIN;
    for (int i = 0; i < V; ++i)
    {
        ans = max(ans, dist[i]);
    }
    // cout << ans;
    for (long long int i = 0; i < V; i++)
    {
        cout << adj[i];
    }

    return 0;
}