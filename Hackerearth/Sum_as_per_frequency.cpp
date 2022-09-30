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
    fast;
    llint n,p,a, b;
    cin >> n;
    vector<llint> v(1000001, 0), cnt(1000001, 0);
    for (llint i = 0; i < n; i++) {
        cin >> p;
        v[p]++;
    }    
    for (llint i = 0; i < 1000001; i++) cnt[v[i]] += v[i]*i;
    for (llint i = 1; i < 1000001; i++) cnt[i] += cnt[i - 1];
    llint q;
    cin >> q;
    while (q--) {
        cin >> a >> b;
        cout << cnt[b] - cnt[a-1] << endl;
    }
}
int main() {
    fast;
    llint t=1, n, a;
    while (t--) {
        aman();
    }
    return 0;
}