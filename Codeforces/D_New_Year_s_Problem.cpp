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
    llint n,m;
    cin>>m>>n;
    vector<vector<llint>> v(m,vector<llint>(n));
    for (llint i = 0; i < m;i++){
        for (llint j = 0; j < n;j++){
            cin>>v[i][j];
        }
    }


    // for (llint i = 0; i < m; i++){
    //     for (llint j = 0; j < n; j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout << "\n";
    // }

    vector<llint> a, b;
    for (llint i = 0; i < m; i++){
        llint maxi = INT_MIN;
        llint sm = INT_MIN;
        for (llint j = 0; j < n; j++){
            if(v[i][j] >= maxi){
                sm = maxi;
                maxi = v[i][j];
            }
            else{
                sm = max(sm,v[i][j]);
            }
        }
        // cout<<maxi<<" "<<sm<<endl;
        a.pb(maxi);
        b.pb(sm);
    }
    sort(all(a));
    sort(all(b));
    cout << min(b[b.size() - 1], a[1])<<"\n";
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