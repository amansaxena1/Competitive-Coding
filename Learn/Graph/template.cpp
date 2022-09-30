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



// ---------------------------------------------DFS START---------------------------------------------------------------
void dfs_helper(llint node, vector<vector<llint>>&adj, vector<llint> &vis, vector<llint> &result){
    vis[node] = 1;
    result.push_back(node);
    for(auto i: adj[node]){
        if(!vis[i]){
            dfs_helper(i, adj, vis, result);
        }
    }
}
vector<llint> dfs(vector<vector<llint>>adj, llint n){
    vector<llint> vis(n + 1, 0);
    vector<llint> result;
    for (llint i = 1; i < n; i++){
        if(!vis[i]){
            dfs_helper(i, adj, vis, result);
        }
    }
    return result;
}
// ---------------------------------------------DFS END---------------------------------------------------------------




// ---------------------------------------------BFS START--------------------------------------------------------------
vector<llint> bfs(vector<vector<llint>>adj, llint n) {
    vector <llint> vis(n + 1, 0);
    vector<llint> result;
    for (llint i = 1; i < n + 1; i++){
        if(!vis[i]){
            queue<llint> q;
            q.push(i);
            vis[i] = 1;
            while(q.size()){
                for (llint j = 0; j < adj[q.front()].size(); j++){
                    if(!vis[adj[q.front()][j]]) {
                        q.push(adj[q.front()][j]);
                        vis[adj[q.front()][j]] = 1;
                    }
                }
                result.pb(q.front());
                q.pop();
            }
        }
    }
    return result;
}
// ---------------------------------------------BFS END--------------------------------------------------------------



int main() {
    fast;
    llint n, m, a, b;
    cin>>n>>m;
    vector<vector<llint>> adj(n+1);
    for (llint i = 0; i < m; i++){
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vector<llint> bfs_result = bfs(adj, n);
    vector<llint> dfs_result = dfs(adj, n);
    
    for (llint i = 0; i < dfs_result.size();i++)
        cout << dfs_result[i] << " ";
    return 0;
}