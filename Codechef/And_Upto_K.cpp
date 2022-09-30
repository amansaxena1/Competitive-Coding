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
    llint n,k;
    vector<llint>v;
    string s;
    cin>>n>>k;
    llint a;
    for(llint i=0;i<n;i++)
    {
        cin >> a;
        v.pb(a);
    }
    sort(all(v));
    llint ans = v[0];
    for (llint i = 0; i < k; i++)
    {
        ans = ans&v[i];
    }
    cout << ans << "\n";
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