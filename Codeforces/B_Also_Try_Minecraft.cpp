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

llint max(llint a,llint b){
    return a>b?a:b;
}
void aman() {
    llint n, m;
    cin>>n>>m;
    vector<llint> v(n);
    for (llint i = 0;i<n;i++)
        cin >> v[i];
    vector<pair<llint,llint>>vp(m);
    for (llint i = 0; i<m; i++)
        cin>>vp[i].ff>>vp[i].ss;


    vector<llint> a(n, 0), b(n, 0);

    // cout <<" aman";
    for (llint i = 1; i < n; i++){
        a[i] = a[i - 1] + max(v[i - 1] - v[i], 0);
        // cout << a[i];
    }
    


    for (llint i = n-2; i>=0; i--){
        b[i] = b[i + 1] + max(v[i + 1] - v[i], 0);
    }

    // for (int i = 0; i < n;i++)
    // {
    //     cout << a[i] << " ";
    // }
    // for (int i = 0; i < n;i++)
    // {
    //     cout << b[i] << " ";
    // }

    for (llint i = 0; i < m; i++)
    {
        if(vp[i].ff > vp[i].ss){
            cout<<-1*(b[vp[i].ff-1] - b[vp[i].ss-1])<<endl;
        }
        else{
            cout<<-1*(a[vp[i].ff-1] - a[vp[i].ss-1])<<endl;
        }    
    }

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