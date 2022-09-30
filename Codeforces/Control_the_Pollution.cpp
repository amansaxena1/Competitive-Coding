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
    llint n,x,y;
    cin>>n>>x>>y;
    llint ans = INT_MAX;
    for (llint i = 0; i < n; i++)
    {
        llint bus = max(0.0,ceil((n - (4 * i)) / 100.0)*x);
        ans = min(ans, (i * y) + bus);
        llint car = max(0.0,ceil((n - (100 * i)) / 4.0)*y);
        ans = min(ans, (i * x) + car);
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