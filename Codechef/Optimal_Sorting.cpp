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
    llint n,a;
    vector<llint>v,u;
    string s;
    cin>>n;
    for(llint i=0;i<n;i++)
    {
        cin>>a;
        v.pb(a);
    }
    u = v;
    sort(all(u));
    if(u==v)
    {
        cout<<"0\n";
        return;
    }
    llint l=0,r=v.size()-1;
    // for (llint i=0; i<v.size(); i++)
    // {
    //     if(v[i]!=u[i])
    //     {
    //         l = i;
    //         break;
    //     }
    // }
    // for (llint i=v.size()-1; i>=0; i--)
    // {
    //     if(v[i]!=u[i])
    //     {
    //         r = i;
    //         break;
    //     }
    // }

    vector<llint> g,h;
    llint maxi = INT_MIN;
    llint mini = INT_MAX;
    for (llint i = l; i <= r ;i++)
    {
        h.pb(v[i]);
    }
    llint cost = 0;
    g = h;
    sort(all(g));
    // llint ele=h[0];
    maxi = -1e18;
    mini = 1e18;
    for (llint i = 0; i < h.size();i++)
    {
        maxi = max(maxi, h[i]);
        mini = min(mini, g[i]);
        if(maxi == g[i]){
            cost += (maxi - mini);
            maxi = -1e18;
            mini = 1e18;
        }
    }
    cout << cost << "\n";
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