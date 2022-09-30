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
    vector<pair<llint,llint>> p(n);
    for(llint i=0;i<n;i++) {
        cin>>p[i].ff>>p[i].ss;
    }
    sort(all(p));
    map<llint,llint> mp;
    for(llint i=0;i<n;i++) {
        mp[p[i].ff]++;
        mp[p[i].ss]--;
    }
    llint ans=0, curr = 0;
    for(auto i:mp) {
        curr+=i.ss;
        ans = max(ans, curr);
    }
    cout<<ans<<endl;
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