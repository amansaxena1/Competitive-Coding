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
    vector<llint> v(n);

    for (llint i = 0;i<n;i++) {
        cin >> v[i];
    }
    llint p = n;
    vector<llint> ans;
    for (llint i = n; i > 0; i--) {
        // for (llint i = 0; i < v.size();i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << "\n";
        if(v[i-1] == i){
            ans.pb(0);
            v.erase(v.begin()+i-1);
        }
        else{
            for (llint j = v.size()-1; j >= 0; j--){
                if (v[j] == i) {
                    ans.pb(j+1);
                    p--;
                    reverse(v.begin(), v.begin() + j);
                    reverse(v.begin() + j + 1, v.end());
                    v.erase(v.begin() + j);
                    reverse(v.begin(), v.end());
                    break;
                }
            }
        }
    }
    for(llint i=n-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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