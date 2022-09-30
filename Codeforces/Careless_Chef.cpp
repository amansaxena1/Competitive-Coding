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
    llint n;
    vector<llint>v;
    cin >> n;
    llint cnt = 0;
    for (llint i = 0; i < 2*n; i++)
    {
        llint x;
        cin >> x;
        v.pb(x);
        if(x%2==0)
        {
            cnt++;
        }
    }
    if(cnt%2==0) cout<<"YES\n";
    else cout<<"NO\n";
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