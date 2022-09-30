#include <bits/stdc++.h>
#define llint long long int
#define mod 998244353
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
void aman() {
    llint n;
    cin>>n;
    vector<llint> v(n);
    llint even = 0, odd = 0;
    for(llint i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0) even++;
        else odd++;
    }
    llint ans = 1;
    for (llint i = 0; i < even;i++){
        ans += odd;
        ans %= mod;
    }
    even += odd/4;
    odd = odd - (odd/2);
    for (llint i = 0; i < even;i++){
        ans += odd;
        ans %= mod;
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