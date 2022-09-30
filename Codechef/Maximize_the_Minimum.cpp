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
    vector<llint> v;
    for (llint i = 0; i < n;i++)
    {
        llint x;
        cin >> x;
        v.pb(x);
    }
    if(k>=n-1){
        cout<<*max_element(all(v))<<"\n";
        return;
    }
    sort(all(v));
    cout << v[k] << "\n";
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