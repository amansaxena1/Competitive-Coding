/*       ¯ಠ_ಠ_/¯        */
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
    llint n,k,q,a,b;
    vector<pair<llint, llint>> v,qu;
    cin >> n >> k >> q;
    for(llint i = 0 ; i < n ; i++)
    {
        cin >> a >> b;
        v.pb({a, b});
    }
    sort(all(v));
    for(llint i = 0 ; i < q ; i++)
    {
        cin >> a >> b;
        qu.pb({a, b});
    }
    sort(all(qu));
    
    
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