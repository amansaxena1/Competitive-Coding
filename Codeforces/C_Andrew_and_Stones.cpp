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
    llint n,a,ans = 0;
    vector<llint>v;
    cin >> n;
    for (llint i = 0; i < n; i++){
        cin >> a;
        v.pb(a);
    }
    a=*max_element(v.begin() + 1, v.end() - 1);
    if(a == 1 || (n==3 && v[1]%2 != 0)){ 
        cout << "-1\n";
        return;
    }
    for (llint i = 1; i < n - 1; i++){
        ans += (v[i] + 1) / 2;
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