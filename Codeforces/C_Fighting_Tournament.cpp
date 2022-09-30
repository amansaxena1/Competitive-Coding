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
    llint n, k;
    cin >> n >> k;
    vector<llint> v(n), u;
    for (llint i = 0; i < n; i++) cin >> v[i];
    u = v;
    for (llint i = 0; i < n; i++) u.pb(v[i]);
    
    vector<int> ans(n);
    llint maxi = v[0];
    map<llint, llint> mp;
    for (int i = 1; i<n; i++) {
        ans[i] = i;
    
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