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
llint tab_dynamic(vector<llint>&v, llint k){
    llint n = v.size();
    vector<llint>dp(k+1, 0);
    dp[0] = 0;
    for (llint i = 1; i <= k; i++){
        dp[i] = INT_MAX;
        for (llint j = 0; j < n; j++){
            if(i - v[j] >= 0){
                dp[i] = min(dp[i], dp[i-v[j]] + 1);
            }
        }
    }
    return dp[k] == INT_MAX ? -1 : dp[k];
}

void aman() {
    llint n,k;
    cin>>n>>k;
    llint ans = 0;
    vector <llint>  v(n), dp(k+1, -1);
    for (llint i = 0; i < n; i++) cin>>v[i];
    llint a = tab_dynamic(v, k);
    cout << a <<"\n";
}
int main() {
    fast;
    llint t=1, n, a;
    while (t--) {
        aman();
    }
    return 0;
}