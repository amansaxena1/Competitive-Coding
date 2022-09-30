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

int helper(int x,int y, int n, int m, vector<vector<int>>&v, vector<vector<int>>&dp){

    int a = 0, b = 0, res = v[x][y];
    if(x == n-1 && y == m-1) return dp[x][y] = v[x][y];
    if(dp[x][y] != -1) return dp[x][y];
    if(x < n-1)
        a = helper(x+1,y,n,m,v,dp);
    if(y < m-1)
        b = helper(x,y+1,n,m,v,dp);
    res += max(a,b);
    return dp[x][y] = res;
}

void aman() {
    vector<vector<int>>v = {{1, 2, 3, 7, 3}, {4, 5, 100, 5, 4};
    int n = 3, m = 5;
    vector<vector<int>>dp(n, vector<int>(m, -1));
    cout << helper(0, 0, n, m, v, dp);
    cout << endl;
    for(auto i:v){
        for(auto j:i)
            cout << j << " ";
        cout << "\n";
    }
    for (int i = 0; i <n; i++){
        for (int j = 0; j <m; j++){
           cout<<dp[i][j]<<" ";
        }
        cout << endl;
    }
    int i = 0, j = 0;
    cout << "\n";
    while(i<n-1 || j<m-1){
        //cout << "kk";
        if(i <=n-2 && dp[i][j] - v[i][j] == dp[i+1][j])
            cout << "D", i++;  
        else {
            cout << "R", j++;
        }
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