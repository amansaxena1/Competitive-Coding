#include <bits/stdc++.h>
#define llint long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

void dfs(llint node, vector<llint>&vis, vector<llint>adj[]){

    vis[node] = 1;
    cout << node << " ";
    for (llint i = 0; i < adj[node].size(); i++){
        if(!vis[adj[node][i]]){
            dfs(adj[node][i], vis, adj);
        }
    }
}

void aman() {
    llint n, m, a, b;
    cin>>n>>m;
    vector<llint> adj[n+1];
    for (llint i = 0; i < m;i++){
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vector<llint> vis(n + 1, 0);
    for (llint i = 1; i < n; i++){
        if(!vis[i])
            dfs(i, vis, adj);
    }
}
int main() {
    fast;
    llint t=1, n, a;
    // cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}