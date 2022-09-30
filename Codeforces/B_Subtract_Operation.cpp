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

// 2 0 5
// -3 -5
// -2


void aman() {
    llint n,k;
    cin>>n>>k;
    vector<llint> v(n);
    unordered_map<llint,llint> s;
    llint f=0;
    for(llint i=0;i<n;i++) {
        cin>>v[i];
        s[v[i]]++;
    }
    for(llint i=0; i<n; i++){
        if(s[v[i]+k]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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