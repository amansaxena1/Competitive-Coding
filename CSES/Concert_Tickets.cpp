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
    cin>>n>>m;
    vector<llint> p(n);
    map<llint,llint> mp;
    for(llint i=0;i<n;i++) {
        cin>>p[i];
        mp[p[i]]++;
    }
    llint a = 0;
    for(llint i=0;i<m;i++){
        cin >> a;
        if(mp.size()==0){
            cout << "-1\n";
            continue;
        }
        auto it = mp.equal_range(a);
        if(it.ff -> ff == a){
            cout<<a<<"\n";
            mp[a]--;
            if(mp[a] == 0) mp.erase(a);
        }
        else{
            if((it.ff->ff) == mp.begin()->ff && mp.begin()->ff > a){
                cout << "-1\n";
            }
            else if(mp.end() != mp.end() &&(it.ff->ff) < a){
                cout << "y ";
                cout << (it.ff->ff) << "\n";
                mp[(it.ff->ff)]--;
                if(mp[(it.ff->ff)] == 0) mp.erase((it.ff->ff));
            }
            else{
                it.ff--;
                cout<<it.ff->ff<<"\n";
                mp[it.ff->ff]--;
                if(mp[it.ff->ff] == 0) mp.erase(it.ff->ff);
            }
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