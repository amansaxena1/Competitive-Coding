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
    llint r,n,b;
    cin >> r>>n>>b;
    r = r - b;
    vector<llint>v;
    for(llint i=0;i<n;i++) {
        cin >> b;
        v.pb(b);
    }
    sort(all(v));
    llint cnt = 0;
    for(llint i=0;i<n;i++) {
        if(r-v[i]>=0) {
            r -= v[i];
            cnt++;
        }
        else{
            break;
        }
    }
    cout << cnt << "\n";
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