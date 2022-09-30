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
    for(llint i=0;i<n;i++)
        cin>>v[i];

    llint cnt = 0;
    for (llint i = 1; i < n - 1; i++){
        if(v[i] > v[i-1] && v[i] > v[i+1]){
            cnt++;
        }
    }
    // cout << cnt << " ";
    if( (n % 2 == 0 && cnt == (n-2)/2) || (n % 2 != 0 && cnt == (n+1-2)/2) ) {
        cout<<"0"<<endl;
        return;
    }


    if(n%2==0){
        llint ans = 0;
        vector<llint> l;
        for (llint i = 1; i < n - 1; i++){
            if(v[i] <= v[i-1] || v[i] <= v[i+1]){
                l.pb(max(v[i-1], v[i+1]) - v[i]  + 1);
            }
            else{
                l.pb(0);
            }
        }
        llint o=0, p=l.size()-1;
        while (p-o>1){
            if(l[o] < l[p]) {
                ans += l[o];
                o += 2;
            }
            else{
                ans += l[p];
                p -= 2;
            
            }
        }
        cout << ans << "\n";
    }
    else{
        llint ans = 0;
        for (llint i = 1; i < n - 1; i+=2){
            if(v[i] <= v[i-1] || v[i] <= v[i+1]){
                ans += max(v[i-1], v[i+1]) - v[i] + 1;
            }
        }
        cout<<ans<<endl;
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