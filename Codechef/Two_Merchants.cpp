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
    llint n, m, c;
    cin >> n >> m >> c;
    vector<llint> a(n),b(m);
    for (llint i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (llint i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(all(a));
    sort(all(b));
    if(a[n-1] > c + m || b[m-1] > c + n){
        cout << "NO" << endl;
        return;
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