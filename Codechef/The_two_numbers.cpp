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
    cin>>n;
    llint mid = n/2;
    llint f = 0;
    while(mid>0){
        if(__gcd(mid, n-mid) == 1){
            f = 1;
            break;
        }
        mid--;
    }
    // cout << mid << " ";
    if(!f){
        cout << n - 2 <<"\n";
        return;
    }
    llint a = __gcd(mid, n-mid);
    llint ans = ((mid / a)*(n-mid)) - a;
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