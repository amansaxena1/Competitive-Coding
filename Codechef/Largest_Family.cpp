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
    llint;
    cin >> n;
    vector<llint>v(n);
    for (llint i = 0; i < n; i++)
        cin >> v[i];
    
    sort(all(v));
    llint ans = 0;
    llint l = n;

    if(v[0]!=0)
        l--;
    else{
        ans++;
    }

    int av = 0;
    for (llint i = 1; i < l; i++) {
        if(v[i] == 0){
            ans++;
            av++;
        }
        else if(v[i] == 1)
            ans++;
        else if(v[i]-1 < l - i + av) {
            ans++;
            av -= v[i]-1;
            l -= (v[i]-1);
        }
        else
            break;
    }
    cout<<ans<<"\n";
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