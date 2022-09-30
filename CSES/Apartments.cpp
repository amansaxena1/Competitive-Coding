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
    llint n, m, k, temp;
    cin >> n >> m >> k;
    vector<pair<llint,llint>> a(n);
    vector<llint> b(m);
    for (llint i = 0; i < n; i++) {
        cin >> temp;
        a[i] = mp(temp-k, temp+k);
    }
    for (llint i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(all(a));
    sort(all(b));

    llint p = 0,cnt=0;
    for (llint i = 0; i < m; i++){
        if(p == n)
            break;
        if(b[i] < a[p].ff){
            continue;
        }
        if(b[i]>=a[p].ff && b[i]<=a[p].ss){
            cnt++;
            p++;
            continue;
        }
        if(b[i]>a[p].ss){
            p++;
            i--;
            continue;
        }
    }
    cout<<cnt<<endl;
}
int main() {
    fast;
    llint t=1, n, a;
    // cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}