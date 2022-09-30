#include <bits/stdc++.h>
#define llint unsigned long long int
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
    vector<pair<llint,llint>> v(n);
    for(llint i=0;i<n;i++) cin>>v[i].ff>>v[i].ss;

    vector<llint> distances;
    for (llint i = 0; i < n; i++)
    {
        for (llint j = 0;j<n;j++)
        {
            if(i==j) continue;
            distances.pb(((v[i].ff - v[j].ff)*(v[i].ff - v[j].ff)) + ((v[i].ss - v[j].ss)*(v[i].ss - v[j].ss)));
        }
    }
    map<llint,llint>mp;
    for(llint i=0;i<distances.size();i++) mp[distances[i]]++;
    
    llint ans=0;
    vector<llint>t;
    for(auto i:mp) t.pb(i.ff);
    sort(all(t));
    llint l = 0, r = t.size() - 1;
    while (l < r)
    {
        ans += mp[t[r] - t[l]] * t[r] * t[l];
        l++;
        r--;
    }
    cout << cbrt(ans) << "\n";
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