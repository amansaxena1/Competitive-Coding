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
    vector<llint> v(n);
    map<llint, llint> mp, ind;

    for (llint i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
        ind[i + 1] = v[i];
    }
    llint l, r;
    for (llint i = 0;i<k;i++) {
        cin >> l >> r;
        mp[ind[l]]--;
        if(mp[ind[l]] == 0)
            mp.erase(ind[l]);
        ind[l] = r;
        mp[ind[l]]++;
        cout << mp.size()+1 << "\n";
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