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
    vector<llint> v(n);
    map<llint, llint> mp;
    for (llint i = 0; i < n; i++) {
        cin>>v[i];
        mp[v[i]]++;    
    }

    vector<llint> ans;
    for(auto i:mp) if(i.ss >= k) ans.pb(i.ff);
    sort(all(ans));
    if(ans.size()<1) cout << "-1\n";
    else{
        llint ansl = ans[0], ansr = ans[0];
        llint l = ans[0], r = ans[0];
        for (llint i = 1; i < ans.size(); i++){
            if(ans[i] == r+1) r = ans[i];
            else{
                if(r - l >= ansr - ansl)
                    ansl = l, ansr = r;
                l = ans[i];
                r = ans[i];
            }
        }
        if(r - l >= ansr - ansl) ansl = l, ansr = r;
        cout << ansl << " " << ansr << "\n";
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