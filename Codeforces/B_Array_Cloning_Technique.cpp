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
    map<llint,llint> mp;
    llint maxi = INT_MIN;
    for (llint i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;
        maxi = max(maxi, mp[v[i]]);
    }
    llint ans = 0;
    while(maxi < n){
        ans++;
        if(n-maxi >= maxi) ans += maxi;
        else ans += n-maxi;

        maxi *= 2;
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