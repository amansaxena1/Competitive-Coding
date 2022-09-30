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
    vector<llint>v(n);
    for (llint i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<llint,llint>mp;
    for (llint i = 0; i < n; i++) {
        mp[v[i]]++;
    }
    llint ans = 1;
    llint vac = 1;
    llint last = 1;
    for (auto i : mp) {
        vac += ((i.ff - last) * ans);
        while(vac < i.ss){
            vac += i.ff;
            ans++;
        }
        vac -= i.ss;
        last = i.ff;
    }
    cout<<ans<<endl;

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