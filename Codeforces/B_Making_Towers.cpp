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



int helper(vector<llint>arr){
    
    int n = arr.size();
    for(){

    }
    return 1;
}




void aman() {
    llint n;
    cin >> n;
    vector<llint>v(n);

    for (llint i = 0; i < n; i++) {
        cin >> v[i];
    }
    map<llint, llint> mp;
    map<llint, vector<llint>> mpp;
    for (llint i = 0; i < n; i++){
        mpp[v[i]].push_back(i);
    }
    for(auto i:mpp){
        llint cnt = 1, maxi = 0;
        mp[i.ff] = helper(i.ss);
    }
    vector<llint> ans;
    for (llint i = 1; i <= n; i++){
        ans.pb(mp[i]);   
    }
    for (llint i = 0; i < n;i++)
        cout << ans[i] << " ";
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