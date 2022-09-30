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
    llint l,r;
    cin>>l>>r;
    map<llint, llint> mp;
    for (llint i = l; i <= r; i++) {
        llint n = i;
        for (llint j = 0; j < 32;j++){
            if (n & (1<<j)) mp[j]++;
        }
    }
    llint maxi = INT_MIN;
    for(auto i:mp) maxi = max(maxi, i.ss);
    cout<< r- l - maxi + 1<<endl;
}
int main() {
    fast;
    llint t=1, n, a;
    cin >> t;

    for (llint i = 1; i <= 200001; i++) {
        llint n = i;
        for (llint j = 0; j < 32;j++){
            if (n & (1<<j)) mp[j]++;
        }
    }
    while (t--) {
        aman();
    }
    return 0;
}