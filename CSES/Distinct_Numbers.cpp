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
    cin >> n;
    vector<llint> v(n);
    for (llint i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    llint ans = unique(all(v)) - v.begin();
    cout << ans << "\n";
}
int main() {
    fast;
    llint t=1, a;
    // cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}