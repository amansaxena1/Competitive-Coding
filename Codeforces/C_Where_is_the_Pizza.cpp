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
    map<llint, llint> mp, ma, mb;
    vector<llint> a(n), b(n), c(n);
    for(llint i=0;i<n;i++){
        cin>>a[i];
        ma[a[i]] = i;
    }
    for(llint i=0;i<n;i++){
        cin>>b[i];
        mb[b[i]] = i;
    }
    for(llint i=0;i<n;i++){
        cin>>c[i];
        if(c[i]!=0)
            mp[c[i]] = 1;
    }



    llint cnt = 1;

    vector<llint> vis(n, 0);

    vector<set<llint>> vs;
    for(llint i=0;i<n;i++){
        if(!vis[i]){
            set<llint> s;
            llint ind1=i;
            while(true){
                llint is = s.size();
                s.insert(a[ind1]);
                vis[ind1] = 1;
                ind1 = ma[b[ind1]];
                if(is == s.size()){
                    vs.push_back(s);
                    break;
                }
            }
        }
    }

    for(auto i:vs){
        llint f = 0;
        for(auto p:i){
            if(mp[p] || ma[p] == mb[p]){
                f = 1;
                break;
            }
        }
        if(!f){
            cnt*=2;
            cnt%=mod;
        }
    }
    cout<<cnt<<"\n";
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
