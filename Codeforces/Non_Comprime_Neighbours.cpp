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
llint gcd(llint a, llint b){
    return b == 0 ? a : gcd(b, a % b);   
}
llint smallestDivisor(llint n){
    if (n % 2 == 0) return 2;
    for (llint i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
    return n;
}
void aman() {
    llint n,a;
    vector<llint>v;
    cin>>n;
    for(llint i=0;i<n;i++){
        cin>>a;
        v.pb(a);
    }
    llint ind = 1;
    for(llint i=0;i<n;i++){
        if(i%2!=0 && i+1<n){
            llint p = gcd(v[ind - 1], v[ind + 1]);
            if(p != 1)
                v[ind] = p;
            else v[ind] = smallestDivisor(v[ind - 1]) * smallestDivisor(v[ind + 1]);
        }
    }
    for (llint i = 0; i < n; i++) cout<<v[i]<<" ";
    cout << "\n";
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