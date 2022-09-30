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

llint find_ele(vector<llint>v, llint carry, llint x){
    llint l = 0, r = v.size()-1;
    while(l<r){
        llint mid = (l+r)/2;
        if(v[mid]==x) return mid;
        else if(v[mid]<x) l = mid;
        else r = mid-1;
    }
    return l;
}

void aman() {
    llint n, x, ans = 0;
    cin>>n>>x;
    vector<llint>v(n);
    for (llint i = 0; i < n; i++) cin>>v[i];

    sort(all(v));

    llint carry = 0;
    for (llint i = 0; i < n; i++){
        llint p = (x - (carry + v[i] - 1)) / (i + 1);
        if(p > 0)
            ans += p;
        carry += v[i] - 1;
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