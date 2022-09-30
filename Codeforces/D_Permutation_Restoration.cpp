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
    llint n;
    cin>>n;
    vector<llint> v(n);
    for (llint i = 0; i < n; i++) cin >> v[i];    
    
    vector <llint> vis(n+1,0), ans(n,0);

    for (llint i = 0; i < n; i++){
        // if(v[i] == 0){
        //     ans[i] = i + 2;
        //     vis[ans[i]] = 1;
        // }
        if(v[i] > 1){
            ans[i] = ceil((i + 1) / (double)v[i]);
            vis[ans[i]] = 1;
        }
    }
    // for (llint i = 0; i < n; i++){
    //     cout << ans[i] << " ";
    // }
    // cout << "\n";
    
    int j = 1;
    for (llint i = 0; i < n;i++){
        if(ans[i] == 0){
            for (; j<=n; j++){
                if(!vis[j]){
                    ans[i] = j;
                    vis[j] = 1;
                    break;
                }
            }
        }
    }
    for (llint i = 0; i < n; i++) cout << ans[i] << " ";
    cout << "\n";
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