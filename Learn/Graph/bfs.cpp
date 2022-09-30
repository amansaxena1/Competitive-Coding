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
void aman() {
    
    llint n, m;
    cin >> n >> m;
    vector<llint> adj[n+1];
    for (llint i = 0; i < m; i++){
        llint a,b;
        cin >> a >> b;
        adj[b].pb(a);
        adj[a].pb(b);
    }

    vector<llint> vis(n + 1, 0);
    queue<llint> q;
    for (llint i = 1; i < n; i++){
        if(!vis[i]){
            q.push(i);
            vis[i] = 1;
            while(q.size()){
                for (llint j = 0; j < adj[q.front()].size(); j++){
                    if(!vis[adj[q.front()][j]]){
                        q.push(adj[q.front()][j]);
                        vis[adj[q.front()][j]] = 1;
                    }
                }
                cout << q.front() << " ";
                q.pop();
            }
        }
    }
}
int main() {
    fast;
    llint t=1, n, a;
    cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}