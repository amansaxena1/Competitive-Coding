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
    cin >> n;
    vector<llint>v;
    for (llint i = 0; i < n; i++) {
        llint a;
        cin >> a;
        v.pb(a);
    }
    
    vector<llint>lsum(n), rsum(n);

    for (llint i = 0;i<n;i++){
        if(i>0) lsum[i] = lsum[i-1] + v[i];
        else lsum[i] = v[i];
    }

    for (llint i = 0;i<n;i++){
        if(i>0) rsum[i] = rsum[i-1] + v[n-i-1];
        else rsum[i] = v[n-i-1];
    }

    reverse(all(rsum));
    llint l=0, r=n-1;
    llint ans=0;

    while(l<r){
        if(lsum[l]>rsum[r]) r--;
        else if(lsum[l]<rsum[r]) l++;
        else{
            ans=(l+n-r+1);
            l++;
            r--;
        }
    }
    
    cout<<ans<<endl;
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