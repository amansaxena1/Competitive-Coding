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
    llint t,a;
    cin>>t;
    vector<llint> v;
    
    for (llint i = 0;i<t;i++) {
        cin >> a;
        v.pb(a);
        
    }
    sort(all(v));
    vector<int> s(t, 0);
    s[0] = v[0];
    for (int i = 1; i < t; i++) s[i] = s[i - 1] + v[i];

    llint n;
    cin >> n;
    for (llint i = 0; i < n; i++){
        cin>>a;
        // if(*(upper_bound(all(v), a)) == a){
        //     llint i = (lower_bound(all(v), a)) - v.begin();
        //     cout << i+1 << " "<<s[i]<<endl;
        // }
        // else{
        //     auto it = (lower_bound(all(v), a));
        //     it--;
        //     llint i = it - v.begin();
        //     cout << i+1 << " "<<s[i]<<endl;

        // }
        llint ub = upper_bound(all(v), a) - v.begin();
        cout << ub<<" "<<s[ub-1]<<endl;
    }
    // for(auto i:s) cout<<i<<" ";
}
int main() {
    fast;
    llint t=1, n, a;
    // cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}