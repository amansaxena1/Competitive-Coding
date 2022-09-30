#include <bits/stdc++.h>
#define llint unsigned long long int
using namespace std;

llint helper(llint a, llint b, llint n, llint m, llint k, vector<vector<vector<llint>>>&dp){
    llint ans = 0;
    if(a < 0 || b < 0 || k < 0) return 0;
    if(a == 0 && b == 0 && k == 0) return 1;
    if(k == 0) return 0;
    if(dp[a][b][k] != -1) return dp[a][b][k];
    for (llint i = 0; i <= n; i++){
        for (llint j = 0; j <= m; j++){
            if(i+j == 0) continue;
            if(b-j < 0) break;
            ans += helper(a-i, b-j, n, m, k-1, dp);
        }
        if(a-i < 0) break;
    }
    return dp[a][b][k] = ans;
}

void aman() {
    llint n, m, k;
    cin>>n>>m>>k;
    vector<vector<vector<llint>>>dp(n+1, vector<vector<llint>>(m+1, vector<llint>(k+1,-1)));
    cout<<helper(n, m, n, m, k, dp)<<"\n";
}
int main() {
    llint t=1, n, a;
    cin >> t;
    while (t--) {
        aman();
    }
    
}