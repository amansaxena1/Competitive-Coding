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
    llint n,a;
    cin >> n;
    vector<pair<llint,llint>> v;
    set<llint> st;
    for (llint i = 0; i < n; i++){
        cin >> a;
        v.pb(mp(a, i));
    }
    sort(all(v));
    cout<<v[0].ss+1<<" "<<v[n-1].ss+1<<endl;

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