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
    vector<llint> v(n),u;
    for (llint i = 0; i < n; i++) cin >> v[i];
    sort(all(v));
    llint ans = 0;
    set<llint> st;
    for (llint i = 0; i < n; i++) {
        if (st.find(v[i]) == st.end() && v[i]<=n) st.insert(v[i]);
        else u.pb(v[i]);
    }
    sort(all(u));
    int ind = 1, ui=0;
    bool f = false;
    for (llint i = 1; i <= n; i++) {
        if(st.find(i)==st.end()){
            if(u[ui] % 2 == 0 && (u[ui] / 2) - 1 >= i){
                ui++;
                ans++;
            }
            else if(u[ui] % 2 != 0 && u[ui]/2 >= i){
                ui++;
                ans++;
            }
            else{
                f = true;
                break;
            }
        }
    }
    if(f){
        cout << -1 << endl;
    }
    else{
        cout << ans << endl;
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